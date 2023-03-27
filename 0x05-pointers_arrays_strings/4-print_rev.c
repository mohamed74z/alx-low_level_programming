#include <stdio.h>

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *s) {
	// Find the length of the input string
	int len = 0;
	while (s[len] != '\0') {
		len++;
	}
	// Print the characters of the string in reverse order
	for (int i = len-1; i >= 0; i--) {
		// Write each character to the console using putchar
		putchar(s[i]);
	}
	// Add a new line character to the end of the output
	putchar('\n');
}
