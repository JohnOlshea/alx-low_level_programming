#include "main.h"
/**
 * _strncat - concatenates two strings.
 *
 * @dest: to be appended
 * @src: appendee
 * @n: second stirng size
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenSrc = 0, lenDn = 0;

	while (*(dest + lenDn) != '\0')
		lenDn++;

	while (*(src + lenSrc) != '\0' && lenDn < 97 && lenSrc < n)
	{
		*(dest + lenDn) = *(src + lenSrc);
		lenDn++;
		lenSrc++;
	}
	*(dest + lenDn) = '\0';
	return (dest);
}
