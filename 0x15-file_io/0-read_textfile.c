#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
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
	FILE *fp;
	char *c;
	ssize_t RD;
	ssize_t WR;

	if (filename == NULL)
	{
		return (0);
	}
	c = malloc(sizeof(char) * letters);
	fp = fopen(filename, "r");
	if (fp != NULL)
	{
		RD = fread(c, sizeof(char), letters, fp);
		WR = fwrite(c, sizeof(char), RD, stdout);
		free(c);
		fclose(fp);
		return (WR);
	}
	return (0);
}
