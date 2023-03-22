/* This program prints the lowercase alphabets from a to z */
#include <stdio.h>

/* Function prototype or function declaration */
void print_alphabet(void);

/* Prints the lowercase alphabets from a to z */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c++);
	}

	putchar('\n');
}
