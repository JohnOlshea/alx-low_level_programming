#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
		ln++;

	return (ln);
}
