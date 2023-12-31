#ifndef DOG_H
#define DOG_H

/**
 * struct dog - properties of a dog
 *
 * @name: pointer to dog name
 * @age: dog's age
 * @owner: pointer to the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
