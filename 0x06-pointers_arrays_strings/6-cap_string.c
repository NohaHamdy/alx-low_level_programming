#include "main.h"
/**
 *cap_string - a function that capitalizes all words of a string
 *@n: the string to be capitalized
 *Return: returns the capitalized string
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
		{
			i++;
		}
		if (n[i - 1] == ','
		|| n[i - 1] == ';'
		|| n[i - 1] == '.'
		|| n[i - 1] == '!'
		|| n[i - 1] == '?'
		|| n[i - 1] == '"'
		|| n[i - 1] == '('
		|| n[i - 1] == ')'
		|| n[i - 1] == '{'
		|| n[i - 1] == '}'
		|| n[i - 1] == ' '
		|| n[i - 1] == '\t'
		|| n[i - 1] == '\n'
		|| i == '0')
		{
		n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
