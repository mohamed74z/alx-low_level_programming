#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex = '0';

	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}

	hex = 'a';

	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}

	putchar('\n');

	return (0);
}
