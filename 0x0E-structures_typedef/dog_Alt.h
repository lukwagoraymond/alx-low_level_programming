#ifndef DOG_H
#define DOG_H

/**
* struct dog - New data type
* @name: Name of Dog
* @age: Age of dog
* @owner: Owner of Dog
*/

struct dog
{
	char * name;
	float age;
	char * owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
