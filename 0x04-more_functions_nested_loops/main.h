#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
* _isupper - checks if char is capital letter
* _isdigit - checks if int is a digit 0-9
* mul - multiply two numbers
* print_numbers - print numbers 0-9
* _putchar - writes the character c to stdout
* print_most_numbers - print 0-9 w/out 2 and 4
* more_numbers - print 0-14 ten times
* print a line of n length
* print a diagonal line of n length
* print a square of n size
* print a triangle of n size
* print_number - print an integer number

**/

int _isupper(int);
int _isdigit(int);
int mul(int, int);
void print_numbers(void);
int _putchar(char);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int);
void print_diagonal(int);
void print_square(int);
void print_triangle(int);
void print_number(int n);

#endif /* MAIN_H */
