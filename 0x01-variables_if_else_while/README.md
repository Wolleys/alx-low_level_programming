# Variables, if, else and while

# Resources
1. [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221230%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221230T101650Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=7b4f84d96df21ccfa3b7b29f8f5fd49494d64812a37ef835ed262d574f133639) (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.)
2. [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
3. [Integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
4. [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
5. [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
6. [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
7. [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
8. [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
9. [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
10. [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

## General
* What are the arithmetic operators and how to use them
* What are the logical operators (sometimes called boolean operators) and how to use them
* What the the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* What are the boolean operators and how to use them
* How to use the `if`, `if ... else` statements
* How to use comments
* How to declare variables of types `char`, `int`, `unsigned int`
* How to assign values to variables
* How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`
* How to use the `while` loop
* How to use variables with the `while` loop
* How to print variables using `printf`
* What is the `ASCII` character set
* What are the purpose of the `gcc` flags `-m32` and `-m64`

# Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use `system`
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

# Tasks
Tasks table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. Positive anything is better than negative nothing  | `0-positive_or_negative.c`  | Assign a random number to the variable `n` |
| 1. The last digit | `1-last_digit.c` | Assign a random number to the variable `n` |
| 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game | `2-print_alphabet.c` | Print the alphabet in lowercase, followed by a new line |
| 3. alphABET | `3-print_alphabets.c` | Print the alphabet in lowercase, and then in uppercase |
| 4. When I was having that alphabet soup, I never thought that it would pay off | `4-print_alphabt.c` | Print the alphabet in lowercase, followed by a new line |
| 5. Numbers | `5-print_numbers.c` | Print all single digit numbers of base 10 starting from `0` |
| 6. Numberz | `6-print_numberz.c` | Print all single digit numbers of base 10 starting from `0` |
| 7. Smile in the mirror | `7-print_tebahpla.c` | Print the lowercase alphabet in reverse |
| 8. Hexadecimal | `8-print_base16.c` | Print all the numbers of base 16 in lowercase |
| 9. Patience, persistence and perspiration make an unbeatable combination for success | `9-print_comb.c` | Print all possible combinations of single-digit numbers |
| 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need | `100-print_comb3.c` | Print all possible different combinations of two digits |
| 11. The success combination in business is: Do what you do better... and: do more of what you do... | `101-print_comb4.c` | Print all possible different combinations of three digits |
| 12. Software is eating the World | `102-print_comb5.c` | Print all possible combinations of two two-digit numbers |
