#include <stdio.h>
/**
 * main - prints fibinacci numbers less than 50
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, c;

	long int a = 1, b = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		}
		else
		{
			printf("%ld\n", a);
		}
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
