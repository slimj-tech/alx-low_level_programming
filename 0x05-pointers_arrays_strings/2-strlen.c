#include "main.h"
/**
 *_strlen - returns the lenght of a string
 *@s: string
 *Return: success
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
