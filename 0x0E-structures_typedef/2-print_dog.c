#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
*print_dog - prints a struct dog.
*@d: pointer to struct.
*Return: void.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %d\n", d->age);
printf("Breed: %s\n", d->breed ? d->breed : "(nil)");
}
