#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct for dog information
 * @name: first member for dog's name
 * @age: second member for dog's age
 * @owner: third member for dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
