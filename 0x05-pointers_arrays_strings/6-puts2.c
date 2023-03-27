#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int i;

	/* Iterate over the string, printing every other character */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}

	/* Print a newline character to end the line */
	putchar('\n');
}
