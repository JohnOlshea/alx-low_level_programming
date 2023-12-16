#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: num of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, len, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
