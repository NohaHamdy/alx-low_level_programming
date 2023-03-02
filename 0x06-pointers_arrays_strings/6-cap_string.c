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
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		} else if (n[i] == ','
			|| n[i] == ';'
			|| n[i] == '.'
			|| n[i] == '!'
			|| n[i] == '?'
			|| n[i] == '"'
			|| n[i] == '('
			|| n[i] == ')'
			|| n[i] == '{'
			|| n[i] == '}'
			|| n[i] == ' '
			|| n[i] == '	'
			|| n[i] == '\n')
		{
			n[i] = n[i];
		}
		i++;
	}
	return (n);
}
