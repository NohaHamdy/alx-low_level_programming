#include"main.h"
void close_file(int fd);
/**
 *close_file - closes the file
 *@fd: the file descriptor
 */
void close_file(int fd)
{
	int cls;

	cls = close(fd);
	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 *main - program that copies content of a file to another file
 *@argc: number of argument
 *@argv: array of arguments
 *Return: number based on error type
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	char *file_from, *file_to;
	char *buffer;
	int RD, WR;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error:Can't write to %s\n", file_to);
		exit(99);
	}
	RD = read(fd1, buffer, 1024);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd1 == -1 || RD == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buffer);
			exit(98);
		}
		WR = write(fd2, buffer, RD);
		if (fd2 == -1 || WR == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buffer);
			exit(99);
		}
	RD = read(fd1, buffer, 1024);
	fd2 = open(file_to, O_WRONLY | O_APPEND);
	} while (RD > 0);
	free(buffer);
	close_file(fd1);
	close_file(fd2);
	return (0);
}
