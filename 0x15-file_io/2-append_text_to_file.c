#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"main.h"
/**
 *append_text_to_file - function that appenda text at the end of a file
 *@filename: name of the file
 *@text_content: is NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int L = 0;
	int WR;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		L = strlen(text_content);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	WR = write(fd, text_content, L);
	if ((fd == -1) || (WR == -1))
	{
		return (-1);
	}
	close(fd);
	return (1);
}
