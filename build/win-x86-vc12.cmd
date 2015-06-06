@echo off
set BUILD_DIR=%~dp0win-x86-vc12\

if not exist %BUILD_DIR% mkdir %BUILD_DIR%
pushd %BUILD_DIR%
cmake.exe ^
  -Wno-dev ^
  -G "Visual Studio 11" ^
  -D CMAKE_CONFIGURATION_TYPES:STRING=Debug;Release ^
  ..\..\
popd
