#include<stdio.h>
#include<string.h>
#include"main.h"
/**
 *create_file - function that creates a file
 *@filename: name of the file to create
 *@text_content: a NULL terminated string to write to the file
 *Return: 1 on success,-1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int L, WR;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		fd = open(filename, O_TRUNC | O_RDWR, 0600);
	} else
	{
		fd = open(filename, O_CREAT | O_RDWR, 0600);
	}
	L = strlen(text_content);
	WR = write(fd, text_content, L);

	if (WR == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
