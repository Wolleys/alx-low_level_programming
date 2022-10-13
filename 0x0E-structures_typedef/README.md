# Structures, typedef
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), 
**without the help of Google:**

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
Projects table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. Poppy | `dog.h`  | A new type `struct dog` |
| 1. A dog is the only thing on earth that loves you more than you love yourself | `1-init_dog.c` | Initialize a variable of type `struct dog` |
| 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad | `2-print_dog.c` | Print a `struct dog` |
| 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read | `dog.h` | A new type `dog_t` as a new name for the type `struct dog` |
| 4. A door is what a dog is perpetually on the wrong side of | `4-new_dog.c` | Create a new dog |
| 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg | `5-free_dog.c` | Free dogs |
