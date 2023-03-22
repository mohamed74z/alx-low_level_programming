/* This program prints the lowercase alphabets from a to z */
#include <stdio.h>

/**
 * Prints the lowercase alphabets from a to z
 * 
 * This function uses a while loop to print the lowercase alphabets
 * from a to z in order. The putchar() function is used to print each
 * character to the console.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c++);
	}

	putchar('\n');
}
