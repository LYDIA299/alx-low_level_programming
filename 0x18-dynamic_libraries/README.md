# 0x18. C - Dynamic libraries
A library is a collection of object files grouped into one unit to ease
programming work distribution or to structure software development into units.
A dynamic library (also named 'shared library', with extension .so) is not part
of an executable file linked with it.
Executable files with dynamic libraries are thus smaller and the same dynamic
library can be reused (shared) by several running programs.

### Learning Objectives
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig
