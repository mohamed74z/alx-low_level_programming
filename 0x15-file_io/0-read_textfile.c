#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, letters2 = 0;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc((letters + 1) * sizeof(char));
	if (buff == NULL)
		return (0);

	buff[letters] = '\0';
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	letters2 =  read(file, buff, letters);
	write(STDOUT_FILENO, buff, letters2);
	close(file);
	free(buff);
	return (letters2);
}
