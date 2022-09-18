#include <stdio.h>
/**
 * main -prints the sum of natural numbers
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
