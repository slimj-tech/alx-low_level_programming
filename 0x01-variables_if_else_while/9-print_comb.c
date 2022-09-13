#include <stdio.h>
/**
 * main- combination
 *
 * Return: success
 */
int main(void)
{
	int nums;

	for (nums = 0; nums <= 9; nums++)
	{
		putchar(nums + '0');
		if (nums < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
