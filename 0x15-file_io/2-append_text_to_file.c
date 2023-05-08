#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content) {
	// Check if the filename is NULL.
	if (filename == NULL) {
		return -1;
	}

	// Check if the text_content is NULL.
	if (text_content == NULL) {
		return 1;
	}

	// Open the file for appending.
	FILE *fp = fopen(filename, "a");
	if (fp == NULL) {
		return -1;
	}

	// Write the text content to the file.
	fputs(text_content, fp);

	// Close the file.
	fclose(fp);

	// Return success.
	return 1;
}
