#include "main.h"
/**
 *rev_string - reverse string
 *description: this will print string in reverse
 *Return: void
 *@s: string
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
