# OpenGUI examples

Here are some simple example projects for OPEN GUI.

All these projects build with CMake and should be portable for cross-platforms.


## Setup Cmake build

### Windows

recomand install mingw64 by installing [msys2](https://www.msys2.org/).

1. download the latest msys2-x86_64-xxxx.exe and install
2. chose a proper environment use perfer [mingw environments](https://www.msys2.org/docs/environments/), here I use `clang64`.
3. install build tool-chain

```bash
pacman -S mingw-w64-clang-x86_64-cmake mingw-w64-clang-x86_64-pkgconf mingw-w64-clang-x86_64-clang mingw-w64-clang-x86_64-lldb
```


## How to use

```bash
mkdir build && cd build
cmake build ..
```


## [FLTK](https://www.fltk.org/) 

FLTK is a cross-platform C++ GUI toolkit for UNIX®/Linux® (X11), Microsoft® Windows®, and macOS®. FLTK provides modern GUI functionality without the bloat and supports 3D graphics via OpenGL® and its built-in GLUT emulation.
