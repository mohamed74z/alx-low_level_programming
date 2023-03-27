#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int len = 0, i;

	/* Find the length of the input string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print the characters of the string in reverse order */
	for (i = len - 1; i >= 0; i--)
	{
		/* Write each character to the console using putchar */
		putchar(s[i]);
	}

	/* Add a new line character to the end of the output */
	putchar('\n');
}
