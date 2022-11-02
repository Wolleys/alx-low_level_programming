# File I/O
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), 
**without the help of Google:**

## General
* Look for the right source of information without too much help
* How to manipulate bits and use bitwise operators

# Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* Allowed syscalls: `read`, `write`, `open`, `close`
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
* Don’t forget to push your header file
* All your header files should be include guarded

# Tasks
Projects table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. Tread lightly, she is near | `0-read_textfile.c` | Read a text file and prints it to the `POSIX` standard output |
| 1. Under the snow | `1-create_file.c` | Create a file |
| 2. Speak gently, she can hear | `2-append_text_to_file.c` | Append text at the end of a file |
| 3. cp | `3-cp.c` | Copy the content of a file to another file |
| 4. elf | `100-elf_header.c` | Display the information contained in the `ELF` header |
