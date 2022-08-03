#include <stdlib.h>
#include "dog.h"
/**
*new_dog - creates a dog
*@name: 1st member.
*@age: 2nd member.
*@owner: 3rd member.
*
*Return: NULL if fail.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int i, lenN, len0;

struct dog *n_dog = NULL;

lenN = 0;
while (name[lenN] != '\0')
lenN++;
len0 = 0;
while (owner[len0] != '\0')
len0++;
n_dog = malloc(sizeof(struct dog));
if (n_dog == NULL)
{
free (n_dog);
return (NULL);
}
n_dog->name = malloc(lenN + 1);
if (n_dog-> == NULL)
{

