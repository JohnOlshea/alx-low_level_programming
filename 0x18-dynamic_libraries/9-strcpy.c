#include "main.h"

/**
 * *_strcpy - does the copy
 * @dest: Pointer to copy
 * @src: string pointer to be copied
 *
 * Return: Pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i, ln = 0;

	while (src[ln] != '\0')
	{
		ln++;
	}

	for (i = 0; i < ln; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
