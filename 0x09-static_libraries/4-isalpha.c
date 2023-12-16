#include "main.h"

/**
 * _isalpha - check if character is uppercase or lowercase
 *
 * @c: character to be tested
 *
 * Return: 1 (Failure), 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
