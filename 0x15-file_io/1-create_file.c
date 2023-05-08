#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
	{
	// Check if the filename is NULL.
	if (filename == NULL)
	{
		return -1;
	}

	// Check if the text_content is NULL.
	if (text_content == NULL)
	{
		text_content = "";
	}

	// Open the file for writing.
	FILE *fp = fopen(filename, "w");
	if (fp == NULL)
	{
		return -1;
	}

	// Write the text content to the file.
	fputs(text_content, fp);

	// Close the file.
	fclose(fp);

	// Return success.
	return 1;
}
