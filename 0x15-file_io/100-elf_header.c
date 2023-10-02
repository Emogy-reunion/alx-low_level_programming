#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void closes_elf(int elf);
void prints_type(unsigned int e_type, unsigned char *e_ident);
void prints_entry(unsigned long int e_entry, unsigned char *e_ident);
void prints_abi(unsigned char *e_ident);
void prints_osabi(unsigned char *e_ident);
void prints_data(unsigned char *e_ident);
void prints_version(unsigned char *e_ident);
void prints_magic(unsigned char *e_ident);
void prints_class(unsigned char *e_ident);
void checks_elf(unsigned char *e_ident);

/**
 * main - a function that displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: N0. of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If file is not an ELF File or
 *              function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op_en, re_ad;

	op_en = open(argv[1], O_RDONLY);
	if (op_en == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closes_elf(op_en);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	re_ad = read(op_en, header, sizeof(Elf64_Ehdr));
	if (re_ad == -1)
	{
		free(header);
		closes_elf(op_en);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checks_elf(header->e_ident);
	printf("ELF Header:\n");
	prints_magic(header->e_ident);
	prints_class(header->e_ident);
	prints_data(header->e_ident);
	prints_version(header->e_ident);
	prints_osabi(header->e_ident);
	prints_abi(header->e_ident);
	prints_type(header->e_type, header->e_ident);
	prints_entry(header->e_entry, header->e_ident);

	free(header);
	closes_elf(op_en);
	return (0);
}

/**
 * closes_elf - a fuction that closes an ELF file.
 * @elf: file descriptor of the ELF file.
 *
 * Description: If file cannot be closed - exit code 98.
 */
void closes_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * prints_entry - a function that prints the entry point of an ELF header.
 * @e_entry: address of the ELF entry point.
 * @e_ident: pointer to an array containing the ELF class.
 */
void prints_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * prints_type - a fuction that prints the type of an ELF header.
 * @e_type: ELF type.
 * @e_ident: pointer to an array containing the ELF class.
 */
void prints_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * prints_abi - a function that prints the ABI version of an ELF header.
 * @e_ident: pointer to an array containing the ELF ABI version.
 */
void prints_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * prints_osabi - a function that prints the OS/ABI of an ELF header.
 * @e_ident: pointer to an array containing the ELF version.
 */
void prints_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * prints_version - a function that prints the version of an ELF header.
 * @e_ident: pointer to an array containing the ELF version.
 */
void prints_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * prints_data - a function that prints data of an ELF header.
 * @e_ident: pointer to an array containing the ELF class.
 */
void prints_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * prints_class - a function that prints the class of an ELF header.
 * @e_ident: pointer to an array containing the ELF class.
 */
void prints_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * prints_magic - a function that prints the magic numbers of an ELF header.
 * @e_ident: pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void prints_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * checks_elf - a funcion that checks if a file is an ELF file.
 * @e_ident: pointer to an array containing ELF magic numbers.
 *
 * Description: If file is not an ELF file - exit code 98.
 */
void checks_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
