#include <windowsx.h>

#include "WinProc.h"

static BOOL GWinProcOnCreate(HWND hWnd, LPCREATESTRUCT lpCreateStruct)
{


  return TRUE;
}

static void GWinProcOnResize(HWND hWnd, UINT state, int width, int height) 
{

}

static void GWinProcOnPaint(HWND hWnd)
{

}

static void GWinProcOnClose(HWND hWnd)
{

}

static void GWinProcOnDestroy(HWND hWnd)
{

}

LRESULT CALLBACK TRBWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
  switch (msg)
  {
    HANDLE_MSG(hWnd, WM_CREATE,  GWinProcOnCreate);
    HANDLE_MSG(hWnd, WM_SIZE,    GWinProcOnResize);
    HANDLE_MSG(hWnd, WM_PAINT,   GWinProcOnPaint);
    HANDLE_MSG(hWnd, WM_CLOSE,   GWinProcOnClose);
    HANDLE_MSG(hWnd, WM_DESTROY, GWinProcOnDestroy);

  default:
    return DefWindowProc(hWnd, msg, wParam, lParam);
  }
}