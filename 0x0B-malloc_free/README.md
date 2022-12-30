# Malloc, free

# Resources
1. [0x0a - malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221230%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221230T113228Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ba587b69ba1f4589b1dc89ea87ae842363a12e980eb14d73fe9fcda9db74fa85)
2. [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64) (stop at 6:50)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

## General
* What is the difference between automatic and dynamic allocation
* What is `malloc` and `free` and how to use them
* Why and when use `malloc`
* How to use valgrind to check for memory leak

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
 Tasks table

 | Task Name  | File Name | Description |
 | --------------- | ------------------------------ |---------------------------------------------------------------|
 | 0. Float like a butterfly, sting like a bee  | `0-create_array.c`  | Create an array of chars, and initializes it with a specific char |
 | 1. The woman who has no imagination has no wings | `1-strdup.c` | Return pointer to a newly allocated space in memory |
 | 2. He who is not courageous enough to take risks will accomplish nothing in life | `2-str_concat.c` | Concatenate two strings |
 | 3. If you even dream of beating me you'd better wake up and apologize | `3-alloc_grid.c` | Return a pointer to a 2 dimensional array of integers |
 | 4. It's not bragging if you can back it up | `4-free_grid.c` | Free a 2 dimensional grid |
 | 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe | `100-argstostr.c` | Concatenate all the arguments of the program |
 | 6. I will show you how great I am | `101-strtow.c` | Split a string into words |
