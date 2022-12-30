# Function pointers

# Resources
1. [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
2. [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
3. [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
4. [Why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
5. [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

## General
* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

# Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are `printf`, `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `function_pointers.h`
* Don’t forget to push your header file
* All your header files should be include guarded

# Tasks
Tasks table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. What's my name | `0-print_name.c`  | A function that prints a name |
| 1. If you spend too much time thinking about a thing, you'll never get it done | `1-array_iterator.c` | A function that executes a function |
| 2. To hell with circumstances; I create opportunities | `2-int_index.c` | A function that searches for an integer |
| 3. A goal is not always meant to be reached, it often serves simply as something to aim at | `3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h` | A program that performs simple operations |
| 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker | `100-main_opcodes.c` | A program that prints the [opcodes](https://en.wikipedia.org/wiki/Opcode) of its own main function |
