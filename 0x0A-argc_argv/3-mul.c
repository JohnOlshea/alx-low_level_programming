#include <stdio.h>
#include "main.h"

/**
 * _atoi -  a function that convert a string to an integer.
 *
 * @s: string pointer to be converted
 *
 * Return: converted int
 */
int _atoi(char *s)
{
	int i = 0, dg = 0, nb = 0, f = 0, ln = 0, d = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}
	while (i < ln && f == 0)
	{
		if (s[i] == '-')
			++dg;

		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (dg % 2)
				d = -d;
			nb = nb * 10 + d;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (nb);
}

/**
 * main - a program that multiplies two numbers
 * @argc: num of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);

	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
