#include <stdio.h>

/**
 * main - Prints text
 *
 * Return: Always 0 (success)
 */
char main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++);
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
