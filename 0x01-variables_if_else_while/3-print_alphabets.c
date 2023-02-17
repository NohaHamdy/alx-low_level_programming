#include<stdio.h>
/**
 *main-main function
 *
 * Return: always 0
 */

int main(void)
{
	char ch = 'a';
	char UCH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	for (UCH = 'A'; UCH <= 'Z'; UCH++)
	{
		putchar(UCH);
	}
	putchar('\n');
	return (0);
}
