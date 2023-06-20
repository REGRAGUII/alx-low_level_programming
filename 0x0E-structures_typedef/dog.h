#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description 
 * @name: name of the dog
 * @owner: name of the owner
 * @age: age of the dog
 * Description:  desciption
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef FUNC
#define FUNC
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
