#pragma once

template <typename T>
T RDCMAX(const T &a, const T &b)
{
  return a > b ? a : b;
}

// The shape of blocks in (a plane of) an image format.
// Non-block formats are considered to have 1x1 blocks.
// For some planar formats, the block shape depends on the plane--
// e.g. VK_FORMAT_G8_B8R8_2PLANE_422_UNORM has 8 bits per 1x1 block in plane 0, but 16 bits per 1x1
// block in plane 1.
struct BlockShape
{
  // the width of a block, in texels (or 1 for non-block formats)
  uint32_t width;

  // the height of a block, in texels (or 1 for non-block formats)
  uint32_t height;

  // the number of bytes used to encode the block
  uint32_t bytes;
};

uint32_t GetYUVPlaneCount(VkFormat f)
{
  switch(f)
  {
    case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM:
    case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM:
    case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM:
    case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM:
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16: return 2;
    case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM:
    case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM:
    case VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM:
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16:
    case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM:
    case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM:
    case VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM: return 3;
    default: break;
  }

  return 1;
}

VkExtent2D GetPlaneShape(uint32_t Width, uint32_t Height, VkFormat Format, uint32_t plane)
{
  switch(Format)
  {
    case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM:
    case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM:
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM:
    case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM:
      if(plane == 0)
        return {Width, Height};
      else
        return {RDCMAX(1U, (Width + 1) / 2), RDCMAX(1U, (Height + 1) / 2)};

    case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM:
    case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM:
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM:
    case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM:
      if(plane == 0)
        return {Width, Height};
      else
        return {RDCMAX(1U, (Width + 1) / 2), Height};

    default: return {Width, Height};
  }
}

BlockShape GetBlockShape(VkFormat Format, uint32_t plane)
{
  switch(Format)
  {
    case VK_FORMAT_R64G64B64A64_UINT:
    case VK_FORMAT_R64G64B64A64_SINT:
    case VK_FORMAT_R64G64B64A64_SFLOAT: return {1, 1, 32};
    case VK_FORMAT_R64G64B64_UINT:
    case VK_FORMAT_R64G64B64_SINT:
    case VK_FORMAT_R64G64B64_SFLOAT: return {1, 1, 24};
    case VK_FORMAT_R32G32B32A32_UINT:
    case VK_FORMAT_R32G32B32A32_SINT:
    case VK_FORMAT_R32G32B32A32_SFLOAT:
    case VK_FORMAT_R64G64_UINT:
    case VK_FORMAT_R64G64_SINT:
    case VK_FORMAT_R64G64_SFLOAT: return {1, 1, 16};
    case VK_FORMAT_R32G32B32_UINT:
    case VK_FORMAT_R32G32B32_SINT:
    case VK_FORMAT_R32G32B32_SFLOAT: return {1, 1, 12};
    case VK_FORMAT_R16G16B16A16_UNORM:
    case VK_FORMAT_R16G16B16A16_SNORM:
    case VK_FORMAT_R16G16B16A16_USCALED:
    case VK_FORMAT_R16G16B16A16_SSCALED:
    case VK_FORMAT_R16G16B16A16_UINT:
    case VK_FORMAT_R16G16B16A16_SINT:
    case VK_FORMAT_R16G16B16A16_SFLOAT:
    case VK_FORMAT_R32G32_UINT:
    case VK_FORMAT_R32G32_SINT:
    case VK_FORMAT_R32G32_SFLOAT:
    case VK_FORMAT_R64_UINT:
    case VK_FORMAT_R64_SINT:
    case VK_FORMAT_R64_SFLOAT: return {1, 1, 8};
    case VK_FORMAT_R16G16B16_UNORM:
    case VK_FORMAT_R16G16B16_SNORM:
    case VK_FORMAT_R16G16B16_USCALED:
    case VK_FORMAT_R16G16B16_SSCALED:
    case VK_FORMAT_R16G16B16_UINT:
    case VK_FORMAT_R16G16B16_SINT:
    case VK_FORMAT_R16G16B16_SFLOAT: return {1, 1, 6};
    case VK_FORMAT_D32_SFLOAT_S8_UINT: return {1, 1, 8};
    case VK_FORMAT_R8G8B8_UNORM:
    case VK_FORMAT_R8G8B8_SNORM:
    case VK_FORMAT_R8G8B8_USCALED:
    case VK_FORMAT_R8G8B8_SSCALED:
    case VK_FORMAT_R8G8B8_UINT:
    case VK_FORMAT_R8G8B8_SINT:
    case VK_FORMAT_R8G8B8_SRGB:
    case VK_FORMAT_B8G8R8_UNORM:
    case VK_FORMAT_B8G8R8_SNORM:
    case VK_FORMAT_B8G8R8_USCALED:
    case VK_FORMAT_B8G8R8_SSCALED:
    case VK_FORMAT_B8G8R8_UINT:
    case VK_FORMAT_B8G8R8_SINT:
    case VK_FORMAT_B8G8R8_SRGB: return {1, 1, 3};
    case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
    case VK_FORMAT_A2B10G10R10_SNORM_PACK32:
    case VK_FORMAT_A2B10G10R10_USCALED_PACK32:
    case VK_FORMAT_A2B10G10R10_SSCALED_PACK32:
    case VK_FORMAT_A2B10G10R10_UINT_PACK32:
    case VK_FORMAT_A2B10G10R10_SINT_PACK32:
    case VK_FORMAT_A2R10G10B10_UNORM_PACK32:
    case VK_FORMAT_A2R10G10B10_SNORM_PACK32:
    case VK_FORMAT_A2R10G10B10_USCALED_PACK32:
    case VK_FORMAT_A2R10G10B10_SSCALED_PACK32:
    case VK_FORMAT_A2R10G10B10_UINT_PACK32:
    case VK_FORMAT_A2R10G10B10_SINT_PACK32:
    case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
    case VK_FORMAT_R8G8B8A8_UNORM:
    case VK_FORMAT_R8G8B8A8_SNORM:
    case VK_FORMAT_R8G8B8A8_USCALED:
    case VK_FORMAT_R8G8B8A8_SSCALED:
    case VK_FORMAT_R8G8B8A8_UINT:
    case VK_FORMAT_R8G8B8A8_SINT:
    case VK_FORMAT_R8G8B8A8_SRGB:
    case VK_FORMAT_B8G8R8A8_UNORM:
    case VK_FORMAT_B8G8R8A8_SNORM:
    case VK_FORMAT_B8G8R8A8_USCALED:
    case VK_FORMAT_B8G8R8A8_SSCALED:
    case VK_FORMAT_B8G8R8A8_UINT:
    case VK_FORMAT_B8G8R8A8_SINT:
    case VK_FORMAT_B8G8R8A8_SRGB:
    case VK_FORMAT_A8B8G8R8_UNORM_PACK32:
    case VK_FORMAT_A8B8G8R8_SNORM_PACK32:
    case VK_FORMAT_A8B8G8R8_USCALED_PACK32:
    case VK_FORMAT_A8B8G8R8_SSCALED_PACK32:
    case VK_FORMAT_A8B8G8R8_UINT_PACK32:
    case VK_FORMAT_A8B8G8R8_SINT_PACK32:
    case VK_FORMAT_A8B8G8R8_SRGB_PACK32:
    case VK_FORMAT_R16G16_UNORM:
    case VK_FORMAT_R16G16_SNORM:
    case VK_FORMAT_R16G16_USCALED:
    case VK_FORMAT_R16G16_SSCALED:
    case VK_FORMAT_R16G16_UINT:
    case VK_FORMAT_R16G16_SINT:
    case VK_FORMAT_R16G16_SFLOAT:
    case VK_FORMAT_R32_UINT:
    case VK_FORMAT_R32_SINT:
    case VK_FORMAT_R32_SFLOAT:
    case VK_FORMAT_X8_D24_UNORM_PACK32:
    case VK_FORMAT_D24_UNORM_S8_UINT:
    case VK_FORMAT_D32_SFLOAT:
    case VK_FORMAT_E5B9G9R9_UFLOAT_PACK32: return {1, 1, 4};
    case VK_FORMAT_D16_UNORM_S8_UINT: return {1, 1, 4};
    case VK_FORMAT_R8G8_UNORM:
    case VK_FORMAT_R8G8_SNORM:
    case VK_FORMAT_R8G8_USCALED:
    case VK_FORMAT_R8G8_SSCALED:
    case VK_FORMAT_R8G8_UINT:
    case VK_FORMAT_R8G8_SINT:
    case VK_FORMAT_R8G8_SRGB:
    case VK_FORMAT_R16_UNORM:
    case VK_FORMAT_R16_SNORM:
    case VK_FORMAT_R16_USCALED:
    case VK_FORMAT_R16_SSCALED:
    case VK_FORMAT_R16_UINT:
    case VK_FORMAT_R16_SINT:
    case VK_FORMAT_R16_SFLOAT:
    case VK_FORMAT_D16_UNORM:
    case VK_FORMAT_R5G6B5_UNORM_PACK16:
    case VK_FORMAT_R5G5B5A1_UNORM_PACK16:
    case VK_FORMAT_B5G5R5A1_UNORM_PACK16:
    case VK_FORMAT_A1R5G5B5_UNORM_PACK16:
    case VK_FORMAT_B5G6R5_UNORM_PACK16:
    case VK_FORMAT_R4G4B4A4_UNORM_PACK16:
    case VK_FORMAT_B4G4R4A4_UNORM_PACK16: return {1, 1, 2};
    case VK_FORMAT_R4G4_UNORM_PACK8:
    case VK_FORMAT_R8_UNORM:
    case VK_FORMAT_R8_SNORM:
    case VK_FORMAT_R8_USCALED:
    case VK_FORMAT_R8_SSCALED:
    case VK_FORMAT_R8_UINT:
    case VK_FORMAT_R8_SINT:
    case VK_FORMAT_R8_SRGB:
    case VK_FORMAT_S8_UINT: return {1, 1, 1};
    case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
    case VK_FORMAT_BC1_RGB_SRGB_BLOCK:
    case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
    case VK_FORMAT_BC1_RGBA_SRGB_BLOCK:
    case VK_FORMAT_BC4_UNORM_BLOCK:
    case VK_FORMAT_BC4_SNORM_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK:
    case VK_FORMAT_EAC_R11_UNORM_BLOCK:
    case VK_FORMAT_EAC_R11_SNORM_BLOCK: return {4, 4, 8};
    case VK_FORMAT_BC2_UNORM_BLOCK:
    case VK_FORMAT_BC2_SRGB_BLOCK:
    case VK_FORMAT_BC3_UNORM_BLOCK:
    case VK_FORMAT_BC3_SRGB_BLOCK:
    case VK_FORMAT_BC5_UNORM_BLOCK:
    case VK_FORMAT_BC5_SNORM_BLOCK:
    case VK_FORMAT_BC6H_UFLOAT_BLOCK:
    case VK_FORMAT_BC6H_SFLOAT_BLOCK:
    case VK_FORMAT_BC7_UNORM_BLOCK:
    case VK_FORMAT_BC7_SRGB_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK:
    case VK_FORMAT_EAC_R11G11_UNORM_BLOCK:
    case VK_FORMAT_EAC_R11G11_SNORM_BLOCK: return {4, 4, 16};
    case VK_FORMAT_ASTC_4x4_UNORM_BLOCK:
    case VK_FORMAT_ASTC_4x4_SRGB_BLOCK:
    case VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT: return {4, 4, 16};
    case VK_FORMAT_ASTC_5x4_UNORM_BLOCK:
    case VK_FORMAT_ASTC_5x4_SRGB_BLOCK:
    case VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT: return {5, 4, 16};
    case VK_FORMAT_ASTC_5x5_UNORM_BLOCK:
    case VK_FORMAT_ASTC_5x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT: return {5, 5, 16};
    case VK_FORMAT_ASTC_6x5_UNORM_BLOCK:
    case VK_FORMAT_ASTC_6x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT: return {6, 5, 16};
    case VK_FORMAT_ASTC_6x6_UNORM_BLOCK:
    case VK_FORMAT_ASTC_6x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT: return {6, 6, 16};
    case VK_FORMAT_ASTC_8x5_UNORM_BLOCK:
    case VK_FORMAT_ASTC_8x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT: return {8, 5, 16};
    case VK_FORMAT_ASTC_8x6_UNORM_BLOCK:
    case VK_FORMAT_ASTC_8x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT: return {8, 6, 16};
    case VK_FORMAT_ASTC_8x8_UNORM_BLOCK:
    case VK_FORMAT_ASTC_8x8_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT: return {8, 8, 16};
    case VK_FORMAT_ASTC_10x5_UNORM_BLOCK:
    case VK_FORMAT_ASTC_10x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT: return {10, 5, 16};
    case VK_FORMAT_ASTC_10x6_UNORM_BLOCK:
    case VK_FORMAT_ASTC_10x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT: return {10, 6, 16};
    case VK_FORMAT_ASTC_10x8_UNORM_BLOCK:
    case VK_FORMAT_ASTC_10x8_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT: return {10, 8, 16};
    case VK_FORMAT_ASTC_10x10_UNORM_BLOCK:
    case VK_FORMAT_ASTC_10x10_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT: return {10, 10, 16};
    case VK_FORMAT_ASTC_12x10_UNORM_BLOCK:
    case VK_FORMAT_ASTC_12x10_SRGB_BLOCK:
    case VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT: return {12, 10, 16};
    case VK_FORMAT_ASTC_12x12_UNORM_BLOCK:
    case VK_FORMAT_ASTC_12x12_SRGB_BLOCK:
    case VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT: return {12, 12, 16};

    case VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG:
    case VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG:
    case VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG:
    case VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG: return {8, 4, 8};
    case VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG:
    case VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG:
    case VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG:
    case VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG:
      return {4, 4, 8};

    /*
     * YUV planar/packed subsampled textures.
     *
     * In each diagram we indicate (maybe part) of the data for a 4x4 texture:
     *
     * +---+---+---+---+
     * | 0 | 1 | 2 | 3 |
     * +---+---+---+---+
     * | 4 | 5 | 6 | 7 |
     * +---+---+---+---+
     * | 8 | 9 | A | B |
     * +---+---+---+---+
     * | C | D | E | F |
     * +---+---+---+---+
     *
     *
     * FOURCC decoding:
     *  - char 0: 'Y' = packed, 'P' = planar
     *  - char 1: '4' = 4:4:4, '2' = 4:2:2, '1' = 4:2:1, '0' = 4:2:0
     *  - char 2+3: '16' = 16-bit, '10' = 10-bit, '08' = 8-bit
     *
     * planar = Y is first, all together, then UV comes second.
     * packed = YUV is interleaved
     *
     * ======================= 4:4:4 lossless packed =========================
     *
     * Equivalent to uncompressed formats, just YUV instead of RGB. For 8-bit:
     *
     * pixel:      0            1            2            3
     * byte:  0  1  2  3   4  5  6  7   8  9  A  B   C  D  E  F
     *        Y0 U0 V0 A0  Y1 U1 V1 A1  Y2 U2 V2 A2  Y3 U3 V3 A3
     *
     * 16-bit is similar with two bytes per sample, 10-bit for uncompressed is
     * equivalent to R10G10B10A2 but with RGB=>YUV
     *
     * ============================ 4:2:2 packed =============================
     *
     * 50% horizontal subsampling packed, two Y samples for each U/V sample pair. For 8-bit:
     *
     * pixel:   0  |  1      2  |  3      4  |  5      6  |  7
     * byte:  0  1  2  3   4  5  6  7   8  9  A  B   C  D  E  F
     *        Y0 U0 Y1 V0  Y2 U1 Y3 V1  Y4 U2 Y5 V2  Y6 U3 Y7 V3
     *
     * 16-bit is similar with two bytes per sample, 10-bit is stored identically to 16-bit but in
     * the most significant bits:
     *
     * bit:    FEDCBA9876543210
     * 16-bit: XXXXXXXXXXXXXXXX
     * 10-bit: XXXXXXXXXX000000
     *
     * Since the data is unorm this just spaces out valid values.
     *
     * ============================ 4:2:0 planar =============================
     *
     * 50% horizontal and vertical subsampled planar, four Y samples for each U/V sample pair.
     * For 8-bit:
     *
     *
     * pixel: 0  1  2  3   4  5  6  7
     * byte:  0  1  2  3   4  5  6  7
     *        Y0 Y1 Y2 Y3  Y4 Y5 Y6 Y7
     *
     * pixel: 8  9  A  B   C  D  E  F
     * byte:  8  9  A  B   C  D  E  F
     *        Y8 Y9 Ya Yb  Yc Yd Ye Yf
     *
     *        ... all of the rest of Y luma ...
     *
     * pixel:  T&4 | 1&5    2&6 | 3&7
     * byte:  0  1  2  3   4  5  6  7
     *        U0 V0 U1 V1  U2 V2 U3 V3
     *
     * pixel:  8&C | 9&D    A&E | B&F
     * byte:  8  9  A  B   C  D  E  F
     *        U4 V4 U5 V5  U6 V6 U7 V7
     */
    case VK_FORMAT_G8B8G8R8_422_UNORM:
    case VK_FORMAT_B8G8R8G8_422_UNORM:
      // 4:2:2 packed 8-bit, so 1 byte per pixel for luma and 1 byte per pixel for chroma (2 chroma
      // samples, with 50% subsampling = 1 byte per pixel)
      return {2, 1, 4};
    case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM:
    case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM:
    case VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM: return {1, 1, 1};
    case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM:
    case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM:
      if(plane == 0)
      {
        return {1, 1, 1};
      }
      else if(plane == 1)
      {
        return {1, 1, 2};
      }
      else
      {
        RDCERR("Invalid plane %d in 2-plane format", plane);
        return {1, 1, 1};
      }
    case VK_FORMAT_R10X6_UNORM_PACK16:
    case VK_FORMAT_R12X4_UNORM_PACK16:
      // basically just 16-bit format with only top 10-bits used
      // 10-bit and 12-bit formats are stored identically to 16-bit formats
      return {1, 1, 2};
    case VK_FORMAT_R10X6G10X6_UNORM_2PACK16:
    case VK_FORMAT_R12X4G12X4_UNORM_2PACK16:
      // just a 16-bit format with only top N-bits used
      // 10-bit and 12-bit formats are stored identically to 16-bit formats
      return {1, 1, 4};
    case VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16:
    case VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16:
      // just a 16-bit format with only top N-bits used
      // 10-bit and 12-bit formats are stored identically to 16-bit formats
      return {1, 1, 8};
    case VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16:
    case VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16:
    case VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16:
    case VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16:
    case VK_FORMAT_G16B16G16R16_422_UNORM:
    case VK_FORMAT_B16G16R16G16_422_UNORM:
      // 10-bit and 12-bit formats are stored identically to 16-bit formats
      // 4:2:2 packed 16-bit
      return {2, 1, 8};
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM:
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM:
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16:
    case VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM: return {1, 1, 2};
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16:
    case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM:
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16:
    case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM:
      if(plane == 0)
      {
        return {1, 1, 2};
      }
      else if(plane == 1)
      {
        return {1, 1, 4};
      }
      else
      {
        RDCERR("Invalid plane %d in 2-plane format", plane);
        return {1, 1, 2};
      }
    default: RDCERR("Unrecognised Vulkan Format: %d", Format);
  }

  return {1, 1, 1};
}

uint32_t GetPlaneByteSize(uint32_t Width, uint32_t Height, uint32_t Depth, VkFormat Format,
                          uint32_t mip, uint32_t plane)
{
  uint32_t mipWidth = RDCMAX(Width >> mip, 1U);
  uint32_t mipHeight = RDCMAX(Height >> mip, 1U);
  uint32_t mipDepth = RDCMAX(Depth >> mip, 1U);

  VkExtent2D planeShape = GetPlaneShape(mipWidth, mipHeight, Format, plane);

  BlockShape blockShape = GetBlockShape(Format, plane);

  uint32_t widthInBlocks = (planeShape.width + blockShape.width - 1) / blockShape.width;
  uint32_t heightInBlocks = (planeShape.height + blockShape.height - 1) / blockShape.height;

  return blockShape.bytes * widthInBlocks * heightInBlocks * mipDepth;
}

uint32_t GetByteSize(uint32_t Width, uint32_t Height, uint32_t Depth, VkFormat Format, uint32_t mip)
{
  uint32_t planeCount = GetYUVPlaneCount(Format);
  uint32_t size = 0;
  for(uint32_t p = 0; p < planeCount; p++)
    size += GetPlaneByteSize(Width, Height, Depth, Format, mip, p);
  return size;
}

VkFormat GetDepthOnlyFormat(VkFormat f)
{
  switch(f)
  {
    case VK_FORMAT_D16_UNORM_S8_UINT: return VK_FORMAT_D16_UNORM;
    case VK_FORMAT_D24_UNORM_S8_UINT: return VK_FORMAT_X8_D24_UNORM_PACK32;
    case VK_FORMAT_D32_SFLOAT_S8_UINT: return VK_FORMAT_D32_SFLOAT;
    default: break;
  }

  return f;
}

bool IsStencilOnlyFormat(VkFormat f)
{
  switch(f)
  {
    case VK_FORMAT_S8_UINT: return true;
    default: break;
  }

  return false;
}

bool IsDepthOrStencilFormat(VkFormat f)
{
  switch(f)
  {
    case VK_FORMAT_D16_UNORM:
    case VK_FORMAT_X8_D24_UNORM_PACK32:
    case VK_FORMAT_D32_SFLOAT:
    case VK_FORMAT_S8_UINT:
    case VK_FORMAT_D16_UNORM_S8_UINT:
    case VK_FORMAT_D24_UNORM_S8_UINT:
    case VK_FORMAT_D32_SFLOAT_S8_UINT: return true;
    default: break;
  }

  return false;
}

bool IsBlockFormat(VkFormat f)
{
  switch(f)
  {
    case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
    case VK_FORMAT_BC1_RGB_SRGB_BLOCK:
    case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
    case VK_FORMAT_BC1_RGBA_SRGB_BLOCK:
    case VK_FORMAT_BC2_UNORM_BLOCK:
    case VK_FORMAT_BC2_SRGB_BLOCK:
    case VK_FORMAT_BC3_UNORM_BLOCK:
    case VK_FORMAT_BC3_SRGB_BLOCK:
    case VK_FORMAT_BC4_UNORM_BLOCK:
    case VK_FORMAT_BC4_SNORM_BLOCK:
    case VK_FORMAT_BC5_UNORM_BLOCK:
    case VK_FORMAT_BC5_SNORM_BLOCK:
    case VK_FORMAT_BC6H_UFLOAT_BLOCK:
    case VK_FORMAT_BC6H_SFLOAT_BLOCK:
    case VK_FORMAT_BC7_UNORM_BLOCK:
    case VK_FORMAT_BC7_SRGB_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK:
    case VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK:
    case VK_FORMAT_EAC_R11_UNORM_BLOCK:
    case VK_FORMAT_EAC_R11_SNORM_BLOCK:
    case VK_FORMAT_EAC_R11G11_UNORM_BLOCK:
    case VK_FORMAT_EAC_R11G11_SNORM_BLOCK:
    case VK_FORMAT_ASTC_4x4_UNORM_BLOCK:
    case VK_FORMAT_ASTC_4x4_SRGB_BLOCK:
    case VK_FORMAT_ASTC_5x4_UNORM_BLOCK:
    case VK_FORMAT_ASTC_5x4_SRGB_BLOCK:
    case VK_FORMAT_ASTC_5x5_UNORM_BLOCK:
    case VK_FORMAT_ASTC_5x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_6x5_UNORM_BLOCK:
    case VK_FORMAT_ASTC_6x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_6x6_UNORM_BLOCK:
    case VK_FORMAT_ASTC_6x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x5_UNORM_BLOCK:
    case VK_FORMAT_ASTC_8x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x6_UNORM_BLOCK:
    case VK_FORMAT_ASTC_8x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x8_UNORM_BLOCK:
    case VK_FORMAT_ASTC_8x8_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x5_UNORM_BLOCK:
    case VK_FORMAT_ASTC_10x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x6_UNORM_BLOCK:
    case VK_FORMAT_ASTC_10x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x8_UNORM_BLOCK:
    case VK_FORMAT_ASTC_10x8_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x10_UNORM_BLOCK:
    case VK_FORMAT_ASTC_10x10_SRGB_BLOCK:
    case VK_FORMAT_ASTC_12x10_UNORM_BLOCK:
    case VK_FORMAT_ASTC_12x10_SRGB_BLOCK:
    case VK_FORMAT_ASTC_12x12_UNORM_BLOCK:
    case VK_FORMAT_ASTC_12x12_SRGB_BLOCK:
    case VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT:
    case VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG:
    case VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG:
    case VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG:
    case VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG:
    case VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG:
    case VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG:
    case VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG:
    case VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG: return true;
    default: break;
  }

  return false;
}
