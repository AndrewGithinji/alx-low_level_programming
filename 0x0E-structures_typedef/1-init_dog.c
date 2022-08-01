#include <stdlib.h>
#include "dog.h"
/**
* init_dog - a function that initialize a variable of type struct dog
*@d: to initialize
*@name:name of dog
*@age: age of dog
*@owner: name of owner
* Description: the struct is for the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	return;

	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
