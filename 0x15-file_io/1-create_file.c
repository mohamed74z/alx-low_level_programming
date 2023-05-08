#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;
	write(file, text_content, i);
	close(file);
	return (1);
}

	// Return success.
	return 1;
}
