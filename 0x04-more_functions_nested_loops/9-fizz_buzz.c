#include "main.h"
#include <stdio.h>
/**
 *Fizz_Buzz - is an interview question designed to help filter out
 */
void Fizz_Buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i != 3) && (i != 5))
		{
			printf("%d ", i);
		} else if ((i % 3) == 0)
		{
			printf("Fizz ");
		} else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		} else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
	}
	printf("\n");
}
