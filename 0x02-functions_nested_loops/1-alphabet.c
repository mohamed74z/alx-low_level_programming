/* This program prints the lowercase alphabets from a to z */
#include <stdio.h>

/* This function prints the lowercase alphabets from a to z */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c++);
	}

	putchar('\n');
}
