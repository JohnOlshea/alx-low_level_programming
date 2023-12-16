#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: source pointer
 * @src: filling pointer
 * @n: buffer lenggth
 *
 * Return: destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
