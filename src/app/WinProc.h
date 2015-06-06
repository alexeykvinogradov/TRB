#ifndef TRB_APP_WINPROC_H
  #define TRB_APP_WINPROC_H

  #include <windows.h>

  /*!
   *\brief Standard WinAPI message handler function
   *\param hWnd    Window handle
   *\param msg     Message code
   *\param wParam  Word param
   *\param lParam  Long param
   *\return Handler result
   */
  LRESULT CALLBACK TRBWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

#endif // TRB_APP_WINPROC_H