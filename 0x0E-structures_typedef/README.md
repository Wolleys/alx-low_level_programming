# Structures, typedef

# Resources
1. [0x0d. Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221230%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221230T114643Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=616cb980ed6820c2193d88fd724f32784bbc20940f533b813b2cdfca4291a0b7)
2. [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
3. [Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
4. [0x0d. Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221230%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221230T114826Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=8e6953995dbbdd710a3cc8ce5725d0ea34d9bb3fed4e3ea2f9345b3c1509c018)
5. [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
6. Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
7. [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/) (Advanced - not mandatory)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

## General
* What are structures, when, why and how to use them
* How to use `typedef`

# Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are `printf`, `malloc`, `free` and `exit`.
* Don’t forget to push your header file
* All your header files should be include guarded

# Tasks
Tasks table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. Poppy | `dog.h`  | A new type `struct dog` |
| 1. A dog is the only thing on earth that loves you more than you love yourself | `1-init_dog.c` | Initialize a variable of type `struct dog` |
| 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad | `2-print_dog.c` | Print a `struct dog` |
| 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read | `dog.h` | A new type `dog_t` as a new name for the type `struct dog` |
| 4. A door is what a dog is perpetually on the wrong side of | `4-new_dog.c` | Create a new dog |
| 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg | `5-free_dog.c` | Free dogs |
