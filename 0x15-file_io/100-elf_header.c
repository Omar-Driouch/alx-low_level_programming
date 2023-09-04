#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

#define BUFFER_SIZE 1024

void print_elf_ident(Elf64_Ehdr *ehdr);
void print_elf_class(Elf64_Ehdr *ehdr);
void print_elf_data(Elf64_Ehdr *ehdr);
void print_elf_version(Elf64_Ehdr *ehdr);
void print_elf_osabi(Elf64_Ehdr *ehdr);
void print_elf_abi_version(Elf64_Ehdr *ehdr);
void print_elf_type(Elf64_Ehdr *ehdr);
void print_elf_entry(Elf64_Ehdr *ehdr);
void error_exit(const char *message, int exit_code);

/**
 * print_elf_ident - Print the ELF identification information.
 * @ehdr: Pointer to the ELF header.
 */
void print_elf_ident(Elf64_Ehdr *ehdr)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr->e_ident[i]);
	}
	printf("\n");
}

/**
 * error_exit - Print an error message to stderr
 * and exit with the given exit code.
 * @message: the message error
 * @exit_code: the exit code
 */
void error_exit(const char *message, int exit_code)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(exit_code);
}

/**
 * print_elf_class - Print the ELF class information.
 * @ehdr: Pointer to the ELF header.
 */
void print_elf_class(Elf64_Ehdr *ehdr)
{
	printf("  Class:                             ");
	switch (ehdr->e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("Invalid\n");
		break;
	}
}

/**
 * print_elf_data - Print the ELF data encoding information.
 * @ehdr: Pointer to the ELF header.
 */
void print_elf_data(Elf64_Ehdr *ehdr)
{
	printf("  Data:                              ");
	switch (ehdr->e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("Invalid\n");
		break;
	}
}

/**
 * print_elf_version - Print the ELF version information.
 * @ehdr: Pointer to the ELF header.
 */
void print_elf_version(Elf64_Ehdr *ehdr)
{
	printf("Version:                           %d(current)\n", ehdr->e_ident[EI_VERSION]);
}

/**
 * print_elf_osabi - Print the ELF OS/ABI information.
 * @ehdr: Pointer to the ELF header.
 */
void print_elf_osabi(Elf64_Ehdr *ehdr)
{
	printf("  OS/ABI:                            ");
	switch (ehdr->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("UNIX - Unknown\n");
		break;
	}
}

/**
 * print_elf_abi_version - Print the ELF ABI version information.
 * @ehdr: Pointer to the ELF header.
 */
void print_elf_abi_version(Elf64_Ehdr *ehdr)
{
	printf("  ABI Version:     %d\n", ehdr->e_ident[EI_ABIVERSION]);
}

/**
 * print_elf_type - Print the ELF file type information.
 * @ehdr: Pointer to the ELF header.
 */
void print_elf_type(Elf64_Ehdr *ehdr)
{
	printf("  Type:                              ");
	switch (ehdr->e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown Type)\n");
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
		printf("Unknown\n");
		break;
	}
}

/**
 * print_elf_entry - Print the ELF entry point address.
 * @ehdr: Pointer to the ELF header.
 */
void print_elf_entry(Elf64_Ehdr *ehdr)
{
	printf("  Entry point address:               0x%lx\n", ehdr->e_entry);
}

/**
 * main - the entry point
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr ehdr;
	ssize_t read_bytes;

	if (argc != 2)
	{
		error_exit("Usage: specify an ELF file as an argument", 1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error_exit("Cannot open the specified file", 2);
	}

	read_bytes = read(fd, &ehdr, sizeof(Elf64_Ehdr));

	if (read_bytes != sizeof(Elf64_Ehdr) || memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		error_exit("The specified file is not an ELF file", 3);
	}

	printf("ELF Header:\n");
	print_elf_ident(&ehdr);
	print_elf_class(&ehdr);
	print_elf_data(&ehdr);
	print_elf_version(&ehdr);
	print_elf_osabi(&ehdr);
	print_elf_abi_version(&ehdr);
	print_elf_type(&ehdr);
	print_elf_entry(&ehdr);

	close(fd);
	return 0;
}
