#include "main.h"
/**
 *swap.c -swap int values
 *
 *Return: success
 */
void swap_int(int *a, int *b)
{
	int cas = *a;
	
	*a = *b;
	*b = cas;
}
