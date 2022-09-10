#include <stdio.h>
/**
 * main- alphabets in reverse
 *
 * Return: zero
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');
	return (0);
}
