#include"main.h"
/**
 *read_textfile - function that reads a text file and
 *prints it to the POSIX standard output
 *@filename: name of the text file to be printed
 *@letters: is the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	ssize_t RD;
	ssize_t WR;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	c = malloc(sizeof(char) * (letters));
	if (c == NULL)
	{
		close(fd);
		return (0);
	}
	RD = read(fd, c, letters);
	if (RD <= 0)
	{
		free(c);
		close(fd);
		return (0);
	}
	WR = write(STDOUT_FILENO, c, RD);
	if (WR != RD)
	{
		free(c);
		close(fd);
		return (0);
	}
	free(c);
	close(fd);
	return (WR);
}
