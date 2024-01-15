#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: source
 * @b: constant param
 * @n: length
 *
 * Return: filled string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
