#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies args
 * @argc: amount of args
 * @argv: pointer to pointers array
 * @strtol: amaghim
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	int result = 1;
	
	for (i = 1; i < argc; i++)
	{
		if (argc < 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			int x = strtol(argv[i], NULL, 10);

			result = result * x;
		}
	}
	printf("%d\n", result);
	return (0);
}
