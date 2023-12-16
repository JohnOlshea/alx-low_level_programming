#include <unistd.h>
#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new lin
 * @str: pointer to string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);
}
