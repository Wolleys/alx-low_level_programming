# Preprocessor

# Resources
1. [Understanding C program Compilation Process](https://www.youtube.com/watch?v=eW5he5uFBNM)
2. [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
3. [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
4. [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
5. [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
6. [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
7. [include guard](https://en.wikipedia.org/wiki/Include_guard)
8. [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

## General
* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

# Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded

# Tasks
Tasks table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. Object-like Macro | `0-object_like_macro.h`  | A header file that defines a macro named `SIZE` |
| 1. Pi | `1-pi.h` | A header file that defines a macro named `PI` |
| 2. File name | `2-main.c` | Print the name of the file it was compiled from |
| 3. Function-like macro | `3-function_like_macro.h` | A function-like macro `ABS(x)` that computes |
| 4. SUM | `4-sum.h` | A function-like macro `SUM(x, y)` that computes |
