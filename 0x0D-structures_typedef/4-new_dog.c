#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str);
int _strlen(char *s);
/**
 * new_dog - create a new dog
 * @name: the name that need to copy
 * @age: the number of age
 * @owner: the owner that need to copy
 * Return: return the mew structure dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);

}
/**
 * _strlen - return the length of a string
 * @s:the string that need to find the length
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
/**
 * _strdup - returns a pointer to a new string which is duplicate of the
 * string str
 * @str: the source string need to copy.
 * Return: return a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *d_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	d_str = malloc(sizeof(char) * (len + 1));
	if (d_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		d_str[i] = str[i];
	d_str[i] = '\0';
	return (d_str);
}
