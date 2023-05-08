#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * main - entry point
 * argc: ...
 * argv: ...
 * Return: ...
 */
int main(int argc, char **argv)
{
	int fd, i;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: could not open file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		fprintf(stderr, "Error: could not read ELF header from file %s\n", argv[1]);
		exit(98);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
	    elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
	    elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
	    elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
		exit(98);
	}
	printf("ELF Header:");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n",
	       elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
	       elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
	       elf_header.e_ident[EI_CLASS] == ELFCLASSNONE ? "none" : "unknown");

	printf("  Data:                              %s\n",
	       elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
	       elf_header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "unknown");

	printf("  Version:                           %d (%s)\n", elf_header.e_ident[EI_VERSION],
	       elf_header.e_ident[EI_VERSION] == EV_CURRENT ? "current" : "unknown");

	printf("  OS/ABI:                            ");
	switch (elf_header.e_ident[EI_OSABI])
	{
        case ELFOSABI_SYSV:
		printf("UNIX System V ABI\n");
		break;
        case ELFOSABI_HPUX:
		printf("HP-UX ABI\n");
		break;
        case ELFOSABI_NETBSD:
		printf("NetBSD ABI\n");
		break;
        case ELFOSABI_LINUX:
		printf("Linux ABI\n");
		break;
        case ELFOSABI_SOLARIS:
		printf("Solaris ABI\n");
		break;
        case ELFOSABI_AIX:
		printf("AIX ABI\n");
		break;
        case ELFOSABI_IRIX:
		printf("IRIX ABI");
		printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);

		printf("  Type:                              ");
		switch (elf_header.e_type)
		{
                case ET_NONE:
			printf("NONE (No file type)\n");
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

	printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header.e_entry);

	printf("  %s\n", "...");
	return (0);
}
