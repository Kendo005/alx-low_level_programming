#include "main.h"

/**
 * print_rev - prints a string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putcher(s[i]);
	}

	_putcher('\n');
}
