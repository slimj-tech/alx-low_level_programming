#include <stdio.h>
/**
 * main - prints fibinacci numbers less than 50
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	int a = 1, b = 2;

	printf("%d, ", a);
	printf("%d, ", b);
	for (i = 3; i <= 48; i++)
	{
		int c = a + b;

		printf("%d, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	return (0);
}
