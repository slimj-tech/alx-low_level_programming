#include <stdio.h>
/**
 * main-hexa decimal numbers in lower case
 *
 * Return: success
 */
int main(void)
{
	char nums;

	for (nums = 0; nums < 10; nums++)
		putchar(nums);
	for (nums = 'a'; nums < 'g'; nums++)
		putchar(nums);
	putchar('\n');
	return (0);
}
