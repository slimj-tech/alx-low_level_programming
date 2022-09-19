#include "main.h"
/**
 *swap_int- swap int values
 *@a: first int
 *@b: second int
 *Return: success
 */
void swap_int(int *a, int *b)
{
	int cas = *a;

	*a = *b;
	*b = cas;
}
