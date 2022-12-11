[![Build](https://github.com/42Paris/minilibx-linux/actions/workflows/ci.yml/badge.svg)](https://github.com/42Paris/minilibx-linux/actions/workflows/ci.yml)

# Infos

This is a fork of the [minilibx](https://github.com/42Paris/minilibx-linux) because it is crap.
This fork removes all compilation warning and 'clean' it in terms of code readability.
I have done ONLY 'pretty' changes to make the code more readable I have not touched any of the logic
behind ANY of the functions, the code remains intact, it passes all the tests and is not better in performance.
It it juste without the annoying warnings and if you want to read the source code to understand functions
I hope this will make it better (can't do magic, did not refactor the code).

## DISCLAIMER

Use this fork at your OWN RISKS, this is not the original minilibx and I am not responsible for any problems that
can happen with it.

This is the MinilibX, a simple X-Window (X11R6) programming API
in C, designed for students, suitable for X-beginners.


## Contents

 - source code in C to create the mlx library
 - man pages (in man/ directory)
 - a test program (in test/ directory) is built
   with the library
 - a public include file mlx.h
 - a tiny configure script to generate an appropriate Makefile.gen

## Requirements for Linux

 - MinilibX only support TrueColor visual type (8,15,16,24 or 32 bits depth)
 - gcc
 - make
 - X11 include files (package xorg)
 - XShm extension must be present (package libxext-dev)
 - Utility functions from BSD systems - development files (package libbsd-dev)
 - **e.g. _sudo apt-get install gcc make xorg libxext-dev libbsd-dev_ (Debian/Ubuntu)**
 
## Requirements for MacOS
 - [Xquartz](https://www.xquartz.org/)

```bash
➜  ~ Brew install Xquartz
➜  ~ reboot
➜  ~ xeyes # run an hello world X11 app
```

MlX Color Opacity / Transparency / Alpha (32 bits depth)
 - 0xFF (fully transparent) or 0x00 (fully opaque)

## Compile MinilibX

 - run ./configure or make
   both will make a few tests, create Makefile.gen
   and then automatically run make on this generated Makefile.gen .
   libmlx.a and libmlx_$(HOSTTYPE).a are created.
   test/mlx-test binary is also created.


## Install MinilibX

 - no installation script is provided. You may want to install
     - libmlx.a and/or libmlx_$(HOSTTYPE).a in /usr/X11/lib or /usr/local/lib
     - mlx.h in /usr/X11/include or /usr/local/include
     - man/man3/mlx*.1 in /usr/X11/man/man3 or /usr/local/man/man3


 Olivier CROUZET - 2014-01-06 -
