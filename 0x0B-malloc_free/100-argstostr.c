#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count
 * @av: vector
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, ln = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			ln++;
		ln++;
	}

	str = (char *)malloc(sizeof(char) * (ln + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < ln; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
