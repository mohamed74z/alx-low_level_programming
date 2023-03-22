/* This program prints the lowercase alphabets from a to z */
#include <stdio.h>

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

/* Main function */
int main(void)
{
	/* Call print_alphabet */
	print_alphabet();

	return 0;
}
