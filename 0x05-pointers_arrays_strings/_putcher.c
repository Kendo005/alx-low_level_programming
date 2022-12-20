#include <unistd.h>

/**
 * _putcher - writes character c to stdout
 * @c: char to be printed
 * Return: on success 1
 */
int _putcher(char c)
{
	return (write(1, &c, 1));
}
