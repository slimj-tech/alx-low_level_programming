#include "main.h"
#include <stdlib.h>
/**
 *str_concat()-this concatnantes twoo strings
 *@s1: string1
 *@s2: string2
 * Return: sucess
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	int i;
	char *s;

	if (s1 == NULL || s2 == NULL)
		s1 = "",
		   s2 = "";
	
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;


	s = malloc(sizeof(char) * (s1 + s2 - 1));

		if (s == NULL)
			return (NULL);

	for (i = 0; i < (len1 + len2); i++)
		s[i] = s1[i] + s2[i];
	s[len1 + len2] = 0;
	return (s);
	/*for (i = 0; i < len2; i++)*/
}
