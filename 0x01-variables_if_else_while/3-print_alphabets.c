#include <stdio.h>
/**
 * main- prin alphabets
 *
 * Return: true
 */
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		putchar(t);
	}
	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}
	putchar ('\n');
	return (0);
}
