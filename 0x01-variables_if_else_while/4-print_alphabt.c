#include <stdio.h>
/**
 * main-alphabets
 *
 * Return: true
 */
int main(void)
{
	char ff;

	for (ff = 'a'; ff <= 'z'; ff++)
		if (ff != 'q' && ff != 'e')
		{
			putchar (ff);
		}
	putchar('\n');
	return (0);
}
