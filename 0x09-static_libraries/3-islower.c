#include "main.h"

/**
 * _islower - check if character is lowercase
 *
 * @c: character to be tested
 *
 * Return: 1 (Failure), 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
