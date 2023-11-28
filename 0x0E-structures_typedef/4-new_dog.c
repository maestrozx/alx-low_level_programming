#include <stdlib.h>
#include "dog.h"
/**
*new_dog - creates a new dog
*@name: 1st member.
*@age: 2nd member.
*@owner: 3rd member.
*
*Return: NULL if fail.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int a, lenDog, lenOwner;
struct dog *n_dog = NULL;
lenDog = 0;
while (name[lenDog] != '\0')
lenDog++;
lenOwner = 0;
while (owner[lenOwner] != '\0')
lenOwner++;
n_dog = malloc(sizeof(struct dog));
if (n_dog == NULL)
{
free(n_dog);
return (NULL);
}
n_dog->name = malloc(lenDog + 1);
if (n_dog->name == NULL)
{
free(n_dog->name);
free(n_dog);
return (NULL);
}
n_dog->owner = malloc(lenOwner + 1);
if (n_dog->owner == NULL)
{
free(n_dog->name);
free(n_dog->owner);
free(n_dog);
return (NULL);
}
for (a = 0; a <= lenDog; a++)
n_dog->name[a] = name[a];
for (a = 0; a <= lenOwner; a++)
n_dog->owner[a] = owner[a];
n_dog->age = age;
return (n_dog);
}
