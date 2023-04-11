#include<stdlib.h>
#include<stdio.h>
#include"main.h"
/**
 *main - program that copies content of a file to another file
 *@argc: number of argument
 *@argv: array of arguments
 *Return: number based on error type
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	char *buffer;
	int RD, WR;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_TRUNC);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	buffer = malloc(sizeof(char) * 1024);
	RD = read(fd1, buffer, 1024);
	WR = write(fd2, buffer, RD);
	free(buffer);
	close(fd1);
	if ((close(fd1)) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	close(fd2);
	if ((close(fd2)) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
