#include<stdio.h>
/**
 *main-main function
 *
 * Return: always 0
 */
int main(void)
{
	char B;

	for (B = 'z'; B >= 'a'; B--)
	{
		putchar(B);
	}
	putchar('\n');
	return (0);
}
