#include "main.h"

/**
 * _strchr -  a function that locates a character in a string
 * @s: string pointer
 * @c: character to be tested
 *
 * Return: found string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
