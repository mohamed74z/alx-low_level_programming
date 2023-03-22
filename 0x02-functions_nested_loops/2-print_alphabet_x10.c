#include <stdio.h>

void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10) // Repeat 10 times
	{
		char letter = 'a';
		while (letter <= 'z') // Print the alphabet
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		i++;
	}
}
