# More malloc, free
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), 
**without the help of Google:**

## General
* How to use the `exit` function
What are the functions `calloc` and `realloc` from the standard library and how to use them

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
 
# Tasks
Projects table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. Trust no one  | `0-malloc_checked.c`  | Allocate memory using `malloc` |
| 1. string_nconcat | `1-string_nconcat.c` | Concatenate two strings |
| 2. _calloc | `2-calloc.c` | Allocate memory for an array, using `malloc` |
| 3. array_range | `3-array_range.c` | Create an array of integers |
| 4. _realloc | `100-realloc.c` | Reallocate a memory block using `malloc` and `free` |
| 5. We must accept finite disappointment, but never lose infinite hope | `101-mul.c` | Multiply two positive numbers |
