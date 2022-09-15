# Functions, nested loops
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), 
**without the help of Google:**

## General
* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
* What are header files and how to to use them with `#include`

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

# Tasks
Projects table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. _putchar  | `0-putchar.c`  | Print `_putchar`, followed by a new line |
|1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game | `1-alphabet.c` | Print the alphabet, in lowercase |
| 2. 10 x alphabet | `2-print_alphabet_x10.c` | Print 10 times the alphabet, in lowercase |
| 3. islower | `3-islower.c` | Check for lowercase character |
| 4. isalpha | `4-isalpha.c` | Check for alphabetic character |
| 5. Sign | `5-sign.c` | Print the sign of a number |
| 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you | `6-abs.c` | Compute the absolute value of an integer |
| 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important | `7-print_last_digit.c` | Print the last digit of a number |
| 8. I'm federal agent Jack Bauer, and today is the longest day of my life | `8-24_hours.c` | Print every minute of the day of Jack Bauer |
| 9. Learn your times table | `9-times_table.c` | Print the 9 times table, starting with 0 |
| 10. a + b | `10-add.c`| Add two integers and returns the result |
| 11. 98 Battery Street, the OG | `11-print_to_98.c` | Print all natural numbers from n to 98 |
| 12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself | `100-times_table.c` | Print the n times table, starting with 0 |
| 13. Nature made the natural numbers; All else is the work of women | `101-natural.c` | Compute and print the sum of all the multiples |
| 14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A | `102-fibonacci.c` | Print the first 50 Fibonacci numbers |
| 15. Even Liber Abbaci | `103-fibonacci.c` | Find and print the sum of the even-valued terms |
| 16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+ | `104-fibonacci.c` | Find and print the first 98 Fibonacci numbers |
