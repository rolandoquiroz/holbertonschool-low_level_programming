#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Defines a new structure dog.
 * @name: char *name parameter for the name.
 * @age: float age parameter for the age.
 * @owner: char *owner parameter for the owner.
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
int _putchar(char);

#endif /* _DOG_H_ */
