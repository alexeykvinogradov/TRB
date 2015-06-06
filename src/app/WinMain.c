#include <windows.h>
#include <tchar.h>

#include "WinProc.h"

#define WINDOW_CLASS_NAME _T("TRB game window")
#define WINDOW_TITLE      _T("Tough Russian Bear")

#define DEFAULT_WIDTH  1024
#define DEFAULT_HEIGHT 768

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  WNDCLASSEX wc   = { 0 };
  MSG        msg  = { 0 };
  HWND       hWnd = NULL;

  wc.lpszClassName = WINDOW_CLASS_NAME;
  wc.cbSize        = sizeof(WNDCLASSEX);
  wc.hIcon         = NULL;
  wc.hIconSm       = NULL;
  wc.hbrBackground = (HBRUSH)COLOR_BTNSHADOW;
  wc.lpszMenuName  = NULL;
  wc.lpfnWndProc   = TRBWndProc;
  wc.style         = CS_DBLCLKS;
  wc.hInstance     = hInstance;
  wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
  wc.cbWndExtra    = 0;
  wc.cbClsExtra    = 0;

  RegisterClassEx(&wc);

  hWnd = CreateWindowEx(0, 
                        WINDOW_CLASS_NAME, 
                        WINDOW_CLASS_NAME, 
                        WS_OVERLAPPEDWINDOW, 
                        0, 
                        0, 
                        DEFAULT_WIDTH, 
                        DEFAULT_HEIGHT, 
                        HWND_DESKTOP, 
                        NULL, 
                        hInstance, 
                        0);

  ShowWindow(hWnd, nShowCmd);

  while (GetMessage(&msg, NULL, 0, 0))
  {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
  }

  return msg.wParam;
}