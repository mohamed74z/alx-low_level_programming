#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char* argv[])
	{
	// Check if the number of arguments is correct.
	if (argc != 3)
	{
		dprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	// Open the file_from for reading.
	FILE* fp_from = fopen(argv[1], "r");
	if (fp_from == NULL)
	{
		dprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	// Open the file_to for writing.
	FILE* fp_to = fopen(argv[2], "w");
	if (fp_to == NULL)
	{
		dprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	// Set the permissions of the created file.
	chmod(argv[2], 0666);

	// Read 1,024 bytes at a time from the file_from and write them to the file_to.
	char buffer[1024];
	size_t bytes_read;
	while ((bytes_read = fread(buffer, 1, 1024, fp_from)) > 0)
	{
		fwrite(buffer, 1, bytes_read, fp_to);
	}

	// Close the files.
	fclose(fp_from);
	fclose(fp_to);

	// Return success.
	return 0;
}

