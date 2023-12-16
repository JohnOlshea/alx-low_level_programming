#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: Num of args
 * @argv: Array vals
 *
 * Return: 0 on Success
 */
int main(int argc, char **argv)
{
	int tot, c;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	tot = strtol(argv[1], &p, 10);
	c = 0;

	if (!*p)
	{
		while (tot > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (tot >= cents[i])
				{
					c += tot / cents[i];
					tot = tot % cents[i];
				}
			}
		}
		if (tot == 1)
			c++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", c);
	return (0);
}
