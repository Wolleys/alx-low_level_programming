# Dynamic libraries

# Resources
1. [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
2. [Create dynamic libraries on Linux](https://www.google.com/#q=linux+create+dynamic+library)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

## General
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable `$LD_LIBRARY_PATH` and how to use it
* What are the differences between static and shared libraries
* Basic usage `nm`, `ldd`, `ldconfig`

## General
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of `ar`, `ranlib`, `nm`

# Requirements
## C
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
* Don’t forget to push your header file

## Bash
* Allowed editors: `vi`, `vim`, `emacs`
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your files should end with a new line ([why?](http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
* The first line of all your files should be exactly #!/bin/bash
* A README.md file, at the root of the folder of the project, describing what each script is doing
* All your files must be executable

# Tasks
Tasks table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. A library is not a luxury but one of the necessities of life | `libdynamic.so, main.h`  | Dynamic library libdynamic.so containing many functions |
| 1. Without libraries what have we? We have no past and no future | `1-create_dynamic_lib.sh` | Create a dynamic library called `liball.so` |
| 2. Let's call C functions from Python | `100-operations.so` | Dynamic library that contains C functions that can be called from Python |
| 3. Code injection: Win the Giga Millions! | `101-make_me_win.sh` | Could you make me win the Jackpot? |
