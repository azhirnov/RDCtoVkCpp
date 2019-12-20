// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#include "StringParser.h"
#include "stl/Algorithms/StringUtils.h"

namespace RDE
{

/*
=================================================
	ToEndOfLine
=================================================
*/
	void StringParser::ToEndOfLine (StringView str, INOUT size_t &pos)
	{
		if ( pos < str.length() and (str[pos] == '\n' or str[pos] == '\r') )
			return;

		while ( pos < str.length() )
		{
			const char	n = (pos+1) >= str.length() ? 0 : str[pos+1];
				
			++pos;

			if ( n == '\n' or n == '\r' )
				return;
		}
	}

/*
=================================================
	ToNextLine
=================================================
*/
	void StringParser::ToNextLine (StringView str, INOUT size_t &pos)
	{
		while ( pos < str.length() )
		{
			const char	c = str[pos];
			const char	n = (pos+1) >= str.length() ? 0 : str[pos+1];
			
			++pos;

			// windows style "\r\n"
			if ( c == '\r' and n == '\n' )
			{
				++pos;
				return;
			}

			// linux style "\n" (or mac style "\r")
			if ( c == '\n' or c == '\r' )
				return;
		}
	}

/*
=================================================
	ToBeginOfLine
=================================================
*/
	void StringParser::ToBeginOfLine (StringView str, INOUT size_t &pos)
	{
		pos = Min( pos, str.length() );

		while ( pos <= str.length() )
		{
			const char	p = (pos-1) >= str.length() ? '\0' : str[pos-1];
				
			if ( p == '\n' or p == '\r' or p == '\0' )
				return;

			--pos;
		}
		pos = 0;
	}
	
/*
=================================================
	DivideLines
=================================================
*/
	void StringParser::DivideLines (StringView str, OUT Array<StringView> &lines)
	{
		lines.clear();

		size_t	pos = 0;
		size_t	prev = 0;

		while ( pos < str.length() )
		{
			ToEndOfLine( str, INOUT pos );

			if ( pos != prev ) {
				lines.push_back( str.substr( prev, pos-prev ) );
			}

			ToNextLine( str, INOUT pos );

			prev = pos;
		}
	}
//-----------------------------------------------------------------------------
namespace {

	
	//
	// C-Style Parser
	//

	struct CStyleParser
	{
	private:
		enum EMode {
			NONE,
			WORD,
			NUMBER,
			OPERATOR,
		};

		uint	_size;
		char	_prev;
		char	_prevPrev;
		EMode	_mode;

	public:
		CStyleParser ();
		bool IsBegin (char c);
		bool IsEnd (char c);
		bool IsUnused (char c);
		bool OnUnknown (char)		{ return false; }	// return true to continue parsing, false - to exit

	private:
		static bool _IsWordBegin (char c);
		static bool _IsWord (char c);
		static bool _IsNumberBegin (char c);
		static bool _IsNumber (char c);
		static bool _IsOperator (char c);
		static bool _IsBinaryOperator (char p, char c);
		static bool _IsTernaryOperator (char pp, char p, char c);
	};

	
/*
=================================================
	constructor
=================================================
*/
	inline CStyleParser::CStyleParser () : _size(0), _prev(' '), _prevPrev(' '), _mode(NONE)
	{}
		
/*
=================================================
	IsBegin
=================================================
*/
	inline bool CStyleParser::IsBegin (char c)
	{
		_mode		= NONE;
		_size		= 0;
		_prevPrev	= _prev;
		_prev		= c;

		if ( _IsWordBegin( c ) )	{ _mode = WORD;		return true; }
		if ( _IsNumberBegin( c ) )	{ _mode = NUMBER;	return true; }
		if ( _IsOperator( c ) )		{ _mode = OPERATOR;	return true; }

		return false;
	}
		
/*
=================================================
	IsEnd
=================================================
*/
	inline bool CStyleParser::IsEnd (char c)
	{
		++_size;

		switch ( _mode )
		{
			case WORD :
			{
				return not _IsWord( c );
			}
			case NUMBER :
			{
				return not _IsNumber( c );
			}
			case OPERATOR :
			{
				if ( _size == 1 )
					return not _IsBinaryOperator( _prev, c );
				else
				if ( _size == 2 )
					return not _IsTernaryOperator( _prevPrev, _prev, c );
				else
					return true;
			}
			case NONE :
				return true;
		}

		_prevPrev	= _prev;
		_prev		= c;

		return true;
	}
		
/*
=================================================
	IsUnused
=================================================
*/
	inline bool CStyleParser::IsUnused (char c)
	{
		return	( (c == ' ') | (c == '\t') | (c == '@') | (c == '$') /*| (c == '\\')*/ );
	}
	
/*
=================================================
	_IsWordBegin
=================================================
*/
	inline bool CStyleParser::_IsWordBegin (char c)
	{
		return	bool( (c >= 'A') & (c <= 'Z') ) |
				bool( (c >= 'a') & (c <= 'z') ) |
					  (c == '_');
	}
	
/*
=================================================
	_IsWord
=================================================
*/
	inline bool CStyleParser::_IsWord (char c)
	{
		return	_IsWordBegin( c ) | _IsNumberBegin( c );
	}
	
/*
=================================================
	_IsNumberBegin
=================================================
*/
	inline bool CStyleParser::_IsNumberBegin (char c)
	{
		return	( (c >= '0') & (c <= '9') );
	}
	
/*
=================================================
	_IsNumber
=================================================
*/
	inline bool CStyleParser::_IsNumber (char c)
	{
		return	bool( (c >= '0') & (c <= '9') ) |
				bool( (c >= 'A') & (c <= 'F') ) |
				bool( (c >= 'a') & (c <= 'f') ) |
					  (c == '.') | (c == 'x') |
					  (c == 'X');
	}
	
/*
=================================================
	_IsOperator
=================================================
*/
	inline bool CStyleParser::_IsOperator (char c)
	{
		return	(	(c == '-') | (c == '+') | (c == '*') | (c == '/') |
					(c == '|') | (c == '&') | (c == '^') | (c == '<') |
					(c == '>') | (c == '?') | (c == ':') | (c == ';') |
					(c == ',') | (c == '.') | (c == '!') | (c == '~') |
					(c == '[') | (c == ']') | (c == '(') | (c == ')') |
					(c == '=') | (c == '%') | (c == '"') | (c == '#') |
					(c == '{') | (c == '}') | (c == '\'') | (c == '\\') );
	}
	
/*
=================================================
	_IsBinaryOperator
=================================================
*/
	inline bool CStyleParser::_IsBinaryOperator (char p, char c)
	{
	#	define PAIR_CMP( _pair_ )	(bool( (p == _pair_[0]) & (c == _pair_[1]) ))

		return	PAIR_CMP( "//" ) | PAIR_CMP( "/*" ) | PAIR_CMP( "*/" ) |
				PAIR_CMP( "&&" ) | PAIR_CMP( "||" ) | PAIR_CMP( "^^" ) |
				PAIR_CMP( "::" ) | PAIR_CMP( "==" ) | PAIR_CMP( "!=" ) |
				PAIR_CMP( ">=" ) | PAIR_CMP( "<=" ) | PAIR_CMP( "##" ) |
				PAIR_CMP( ">>" ) | PAIR_CMP( "<<" ) | PAIR_CMP( "|=" ) |
				PAIR_CMP( "&=" ) | PAIR_CMP( "^=" ) | PAIR_CMP( "+=" ) |
				PAIR_CMP( "-=" ) | PAIR_CMP( "*=" ) | PAIR_CMP( "/=" ) |
				PAIR_CMP( "%=" );

	#	undef PAIR_CMP
	}
	
/*
=================================================
	_IsTernaryOperator
=================================================
*/
	inline bool CStyleParser::_IsTernaryOperator (char pp, char p, char c)
	{
	#	define TRIPLE_CMP( _triple_ )	(bool( (pp == _triple_[0]) & (p == _triple_[1]) & (c == _triple_[2]) ))

		return	TRIPLE_CMP( ">>=" ) | TRIPLE_CMP( "<<=" );

	#	undef TRIPLE_CMP
	}
}

/*
=================================================
	DivideString
=================================================
*/
	bool StringParser::DivideString_CPP (StringView str, OUT Array<StringView> &tokens)
	{
		CStyleParser	parser;

		bool	word = false;
		size_t	begin = 0;

		tokens.clear();

		for (size_t i = 0; i < str.length(); ++i)
		{
			const char	c = str[i];

			if ( word )
			{
				if ( parser.IsEnd( c ) )
				{
					word = false;
					tokens.push_back( StringView( str.data() + begin, i - begin ));
					--i;
				}
				continue;
			}

			if ( parser.IsUnused( c ) )
				continue;

			if ( parser.IsBegin( c ) )
			{
				word = true;
				begin = i;
				continue;
			}
		
			if ( not parser.OnUnknown( c ) ) {
				RETURN_ERR( "invalid char '"s << c << "'" );
			}
		}	

		if ( word )
			tokens.push_back( StringView( str.data() + begin, str.length() - begin ));

		return true;
	}

}	// RDE
