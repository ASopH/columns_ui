#pragma once

/*!
 * \file gdiplus.h
 *
 * \author musicmusic
 * \date March 2015
 *
 * Contains helper functions for loading PNG images using Gdiplus
 */

#include "stdafx.h"

class CheckGdiplusStatus {
public:
    static void g_CheckGdiplusStatus(Gdiplus::Status pStatus);
    void operator<<(const Gdiplus::Status pStatus) { g_CheckGdiplusStatus(pStatus); }
};

HBITMAP g_CreateHbitmapFromGdiplusBitmapData32bpp(const Gdiplus::BitmapData& pBitmapData);
HBITMAP g_load_png_gdiplus_throw(
    HDC dc, const char* fn, unsigned target_cx = pfc_infinite, unsigned target_cy = pfc_infinite);
HBITMAP g_load_png_gdiplus(
    HDC dc, const char* fn, unsigned target_cx = pfc_infinite, unsigned target_cy = pfc_infinite);