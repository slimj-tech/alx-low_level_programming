#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;
	
	char *Nam, *Own;

	int i, len_owner = _strlen(owner), len_name = _strlen(name);

	mydog = malloc(sizeof(dog_t));

	if (!mydog)
		return(0);

	Nam = malloc(sizeof(char) * (len_name + 1));
	if (!Nam)
	{
		free(Nam);
		free(mydog);
		return(0);
	}
	Own = malloc(sizeof(char) * (len_owner + 1));
	if (!Own)
	{
		free(Own);
		free(Nam);
		free(mydog);
		return(0);
	}
	for (i =0; i < len_name; i++)
		Nam[i] = name[i];
	Nam[i] = '\0';
	for (i = 0; i < len_owner; i++)
		 Own[i] = owner[i];
	 Own[i] = '\0';



	mydog->name = Nam;
	mydog->age = age;
	mydog->owner = Own;

	return(mydog);
}
/**
    * _strlen-lenght of string
    * Return: 0
    * @s:string
    */

int _strlen(char *s)
{
	int counter = 0;
	while (s[counter] != 0)
		counter++;
       	return(counter);
}

