#ifndef TRB_TRBCOMMON_APIDEFINITIONS_H
  #define TRB_TRBCOMMON_APIDEFINITIONS_H

  #if defined(_WIN32) || defined(_WIN64)

  #if defined(COMMON_API_EXPORTS)
  #	  define TRBCOMMONAPI __declspec(dllexport)
  #else
  #		define TRBCOMMONAPI __declspec(dllimport)
  #endif // COMMON_API_EXPORTS

  #endif // _WIN32 || _WIN64


#endif // TRB_TRBCOMMON_APIDEFINITIONS_H