#include "main.h"

/**
 * lenght - is the lenght of the string
 * @s: string used
 * Return: string lenght
 */
int lenght(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}

/**
 * help - lenght of the string by index
 * @i: integer
 * @s: string
 * Return: int value of the result
 */
int help(int i, char *s)
{
	if (*s)
	{
		if (*s != s[lenght(s) - i])
		{
			return (0);
		}
		return (help(i + 1, s + 1));
	}
	return (1);
}

/**
 * is_palindrome - is current value equale to the previous value
 * @s: string
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (help(i, s));
}
