#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
	{
	// Check if the filename is NULL.
	if (filename == NULL)
	{
		return 0;
	}
	
	// Open the file for reading.
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return 0;
	}

	// Read the file one letter at a time.
	char ch;
	size_t i = 0;
	while (i < letters && (ch = fgetc(fp)) != EOF)
	{
		// Write the letter to standard output.
		fputc(ch, stdout);
		i++;
	}

	// Close the file.
	fclose(fp);

	// Return the number of letters that were read and printed.
	return i;
}
