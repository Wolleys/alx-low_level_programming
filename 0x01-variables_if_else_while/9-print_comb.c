#include <stdio.h>

/**
 * main - writes 0-9
 * @void: Empty parameter list for main.
 *
 * Description: Writes 0-9 with comma and space
 *
 * Return: 0 for success
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
