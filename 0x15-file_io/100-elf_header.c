#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */

#define ELF_MAGIC 0x7F454C46

int main(int argc, char *argv[])
	{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(1);
	}

	FILE *fp = fopen(argv[1], "rb");
	if (fp == NULL)
	{
		perror("fopen");
		exit(1);
	}

	// Seek to the beginning of the ELF header.
	if (fseeko(fp, 0, SEEK_SET))
	{
		perror("fseeko");
		exit(1);
	}

	// Read the ELF header.
	struct elf_header
	{
		unsigned char magic[4];
		unsigned char class;
		unsigned char data;
		unsigned char version;
		unsigned char os_abi;
		unsigned char abi_version;
		unsigned short type;
		unsigned long entry_point;
	} header;
	if (fread(&header, sizeof(header), 1, fp) != 1)
	{
		perror("fread");
		exit(1);
	}

	// Check that the file is an ELF file.
	if (header.magic != ELF_MAGIC) {
		fprintf(stderr, "Not an ELF file.\n");
		exit(98);
	}

	// Print the information contained in the ELF header.
	printf("Magic: %08x\n", header.magic);
	printf("Class: %d\n", header.class);
	printf("Data: %d\n", header.data);
	printf("Version: %d\n", header.version);
	printf("OS/ABI: %d\n", header.os_abi);
	printf("ABI Version: %d\n", header.abi_version);
	printf("Type: %d\n", header.type);
	printf("Entry point address: %lx\n", header.entry_point);

	fclose(fp);
	return 0;
}

