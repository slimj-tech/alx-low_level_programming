#include <stdio.h>
/**
 * main - Entry 
 *
 *  Return: 0
 */
int main(void)
{
	char chara;
	int inti;
	long longi;
	long long alongi;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(chara));
	printf("Size of an int: %lu byte(s)\n", sizeof(inti));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longi));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alongi));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));

	return (0);
}
