#include <stdio.h>

/**
 * main - Prints base 10 numbers
 * @void: Empty parameter list for main.
 *
 * Description: Prints numbers 0-9
 *
 * Return: 0 for success
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
