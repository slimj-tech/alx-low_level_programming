#include <stdio.h>
/**
 * main-main arguements
 * @argc: number of argument passed
 * @argv: array of arguments
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
