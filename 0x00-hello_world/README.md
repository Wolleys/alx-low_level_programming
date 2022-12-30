# Hello, World

# Resources
1. [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221230%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221230T095651Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9cf22d4779bc9553729b11eac645c1068c84f8466b32642c47ad1e117edc03a9)
2. [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
3. [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
4. [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
5. [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
6. [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
7. [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
8. [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
9. [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21) (Look at only after you finish consuming the other resources)
10. [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus) (Look at only after you finish consuming the other resources)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

## General
* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type `gcc main.c`
* What is an entry point
* What is `main`
* How to print text using `printf`, `puts` and `putchar`
* How to get the size of a specific type using the unary operator `sizeof`
* How to compile using `gcc`
* What is the default program name when compiling with `gcc`
* What is the official C coding style and how to check your code with `betty-style`
* How to find the right header to include in your source code when using a standard library function
* How does the `main` function influence the return value of the program

# Requirements
## C
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use `system`
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

## Shell Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly `#!/bin/bash`

# Tasks
Tasks table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. Preprocessor  | `0-preprocessor`  | Run a C file through the preprocessor |
| 1. Compiler | `1-compiler` | Compile a C file but don't link |
| 2. Assembler | `2-assembler` | Generate the assembly code of a C code |
| 3. Name | `3-name` | Compile a C file and creates an executable |
| 4. Hello, puts | `4-puts.c` | Print exactly |
| 5. Hello, printf | `5-printf.c` | Print exactly |
| 6. Size is not grandeur, and territory does not make a nation | `6-size.c` | Print the size of various types |
| 7. Intel | `100-intel` | Generate the assembly code (Intel syntax) |
| 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity | `101-quote.c` | Print exactly |
