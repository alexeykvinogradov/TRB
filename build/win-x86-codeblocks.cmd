@echo off
set BUILD_DIR=%~dp0win-x86-codeblocks\

if not exist %BUILD_DIR% mkdir %BUILD_DIR%
pushd %BUILD_DIR%
cmake.exe ^
  -Wno-dev ^
  -G "CodeBlocks - MinGW Makefiles" ^
  -D CMAKE_CONFIGURATION_TYPES:STRING=Debug;Release ^
  ..\..\
popd
