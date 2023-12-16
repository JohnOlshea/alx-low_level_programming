#include "main.h"
/**
 * _strcat -  concatenates two strings
 *
 * @dest: to be appended
 * @src: appendee
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int lenSrc = 0, lenDn = 0;

	while (*(dest + lenDn) != '\0')
		lenDn++;

	while (*(src + lenSrc) != '\0' && lenDn < 97)
	{
		*(dest + lenDn) = *(src + lenSrc);
		lenDn++;
		lenSrc++;
	}
	*(dest + lenDn) = '\0';
	return (dest);
}
