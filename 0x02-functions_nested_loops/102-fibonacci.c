#include <stdio.h>
/**
 * main - prints fibinacci numbers less than 50
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i;

	long int a = 1, b = 2;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 3; i <= 50; i++)
	{
		long int c = a + b;

		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	return (0);
}
