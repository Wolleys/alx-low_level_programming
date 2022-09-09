#include <stdio.h>

/**
 * main - Prints base 16
 * @void: Empty parameter list for main.
 *
 * Description: Prints all hexadecimals
 *
 * Return: 0 for success
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
