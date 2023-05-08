#include<elf.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
void DISPLAY_ABI_VERSION(unsigned char *e_ident);
void DISPLAY_OSABI(unsigned char *e_ident);
void CHECK_ELF_FILE(unsigned char *e_ident);
void DISPLAY_MAGIC(unsigned char *e_ident);
void DISPLAY_CLASS(unsigned char *e_ident);
void DISPLAY_DATA(unsigned char *e_ident);
void DISPLAY_VERSION(unsigned char *e_ident);
/**
 * DISPLAY_ABI_VERSION - displays the ABI version of an ELF file.
 * @e_ident: a poiter to an array contains information of an ELF file.
 */
void DISPLAY_ABI_VERSION(unsigned char *e_ident)
{
	printf("ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}
/**
 * DISPLAY_OSABI - displays the OS/ABI of an ELF header file .
 * @e_ident: a poiter to an array contains information of an ELF file
 */
void DISPLAY_OSABI(unsigned char *e_ident)
{
	printf("OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
			break;
	}
}
/**
 *CHECK_ELF_FILE - a function to check if a file is an ELF file or not
 *@e_ident: Pointer to an array contains numbers as information of ELF file
 */
void CHECK_ELF_FILE(unsigned char *e_ident)
{
	if (e_ident[0] != 127 &&
		e_ident[1] != 45 &&
		e_ident[2] != 76 &&
		e_ident[3] != 46)
	{
		dprintf(STDERR_FILENO, "Error: This is not an ELF file\n");
		exit(98);
	}
}

/**
 *DISPLAY_MAGIC - a function to display magic of ELF file
 *@e_ident: Pointer to an array contains numbers as information of ELF file
 */
void DISPLAY_MAGIC(unsigned char *e_ident)
{
	int i;

	printf("Magic:  ");
	for (i = 0; i <= 15; i++)
	{
		printf(" %02x", e_ident[i]);
		if (i == 15)
		{
			printf("\n");
		}
	}
}

/**
 *DISPLAY_CLASS - a function to display the class of an ELF file
 *@e_ident: Pointer to an array contains numbers as information of ELF file
 */
void DISPLAY_CLASS(unsigned char *e_ident)
{
	printf("Class:                             ");
	switch (e_ident[4])
	{
	case 0:
		printf("none\n");
		break;
	case 1:
		printf("ELF32\n");
		break;
	case 2:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown:%02x\n>", e_ident[4]);
		break;
	}
}

/**
 *DISPLAY_DATA - function to display data of an ELF file
 *@e_ident: a poiter to an array of numbers as information of an ELF file
 */
void DISPLAY_DATA(unsigned char *e_ident)
{
	printf("Data:                              ");
	switch (e_ident[5])
	{
	case 0:
		printf("none\n");
		break;
	case 1:
		printf("2's complement, little endian\n");
		break;
	case 2:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown:%02x\n>", e_ident[5]);
	}
}
/**
 *DISPLAY_VERSION - function to display version of an ELF file
 *@e_ident: a poiter to an array of numbers as information of an ELF file
 */
void DISPLAY_VERSION(unsigned char *e_ident)
{
	printf("Version:                           %d", e_ident[6]);
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
 *main - program that displays the information contained in the ELF header
 *at the start of an ELF file
 *@argc: number of arguments in the command line
 *@argv: arguments vector
 *Return: returns 0 when success
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *H_buff;
	int fd, RD;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Error: wrong arguments count\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{	dprintf(STDERR_FILENO, "Error: can't open the file %s \n", argv[1]);
		exit(98);
	}
	H_buff = malloc(sizeof(Elf64_Ehdr));
	if (H_buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Buffer error for the file %s \n", argv[1]);
		exit(98);
	}
	RD = read(fd, H_buff, sizeof(Elf64_Ehdr));
	if (RD == -1)
	{	free(H_buff);
		dprintf(STDERR_FILENO, "Error: Can't read the file %s \n", argv[1]);
		exit(98);
	}
	CHECK_ELF_FILE(H_buff->e_ident);
	printf("ELF Header:\n");
	DISPLAY_MAGIC(H_buff->e_ident);
	DISPLAY_CLASS(H_buff->e_ident);
	DISPLAY_DATA(H_buff->e_ident);
	DISPLAY_VERSION(H_buff->e_ident);
	DISPLAY_OSABI(H_buff->e_ident);
	DISPLAY_ABI_VERSION(H_buff->e_ident);
	/**
	*DISPLAY_TYPE(H_buff->e_type, H_buff->e_ident);
	*DISPLAY_ENTRY_POINT_ADDRESS(H_buff->e_entry ,H_buff->e_ident);
	*/
	free(H_buff);
	/*CLOSE_ELF_FILE();*/
	return (0);
}
