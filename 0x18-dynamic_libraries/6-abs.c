#include "main.h"

/**
 * _abs - computes absolute value of integer
 *
 * @n: character to be tested
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
