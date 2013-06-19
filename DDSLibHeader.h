#ifndef __DDSLIB_HEADER_H__
#define __DDSLIB_HEADER_H__

#include "DDSLibTypes.h"

namespace ddslib
{

// ピクセルフォーマット
struct DDS_PIXELFORMAT
{
    UInt32 mSize;
    UInt32 mFlags;
    UInt32 mFourCC;
    UInt32 mRGBBitCount;
    UInt32 mRBitMask;
    UInt32 mGBitMask;
    UInt32 mBBitMask;
    UInt32 mABitMask;
};

// DDS のヘッダ
struct DDS_HEADER
{
    UInt32          mSize;
    UInt32          mFlags;
    UInt32          mHeight;
    Uint32          mWidth;
    Uint32          mPitchOrLinearSize;
    UInt32          mDepth;
    UInt32          mMipMapCount;
    UInt32          mReserved[11];
    DDS_PIXELFORMAT mDDSPixelFormat;
    UInt32          mCaps;
    UInt32          mCaps2;
    UInt32          mCaps3;
    UInt32          mCaps4;
    UInt32          mReserved2;
};

}//ddslib


#endif//__DDSLIB_HEADER_H__
