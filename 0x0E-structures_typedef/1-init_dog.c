#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the initializes a variable of type struct dog.
 * @d: the  pointer to struct
 * @name: the  parameter of name of the dog
 * @age: the parameter of age of the dog
 * @owner: the  pinter parameter to owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
