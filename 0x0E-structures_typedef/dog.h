#ifndef DOG_H
#define DOG_H

/*
* File: dog.h
* Description: Header file Defining new type struct dog.
*/

/**
* struct dog - New type describing a dog.
* @name: Dog’s Name.
* @age: Dog’s age.
* @owner: Dog’s owner.
*/

struct dog
{
char *name;
float age;
char *owner;
};

/**
* dog_t - Typedef struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
