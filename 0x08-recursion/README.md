# Recursion

# Resources
1. [0x08. Recursion, introduction](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221230%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221230T110801Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=6c7c63c8c38e9df45d1644f2511c6e6cb00f2c099b1d4fb0dba4b4e39be246a5)
2. [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
3. [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
4. [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
5. [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs)

#Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

## General
* What is recursion
* How to implement recursion
* In what situations you should implement recursion
* In what situations you shouldn’t implement recursion

# Requirements
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
* **You are not allowed to use any kind of loops**
* You are not allowed to use `static` variables

# Tasks
Tasks table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget  | `0-puts_recursion.c`  | Print a string, followed by a new line |
| 1. Why is it so important to dream? Because, in my dreams we are together | `1-print_rev_recursion.c` | Print a string in reverse |
| 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange | `2-strlen_recursion.c` | Return the length of a string |
| 3. You mustn't be afraid to dream a little bigger, darling | `3-factorial.c` | Return the factorial of a given number |
| 4. Once an idea has taken hold of the brain it's almost impossible to eradicate | `4-pow_recursion.c` | Return the value of `x` raised to the power of `y` |
| 5. Your subconscious is looking for the dreamer | `5-sqrt_recursion.c` | Return the natural square root of a number |
| 6. Inception. Is it possible? | `6-is_prime_number.c` | Return `1` if the input integer is a `prime number` |
| 7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything | `100-is_palindrome.c` | Return `1` if a string is a palindrome and `0` if not |
| 8. Inception. Now, before you bother telling me it's impossible... | `101-wildcmp.c` | Compare two strings and return |
