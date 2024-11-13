#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog
 * @name: The name of the dog (string)
 * @age: The age of the dog (float)
 * @owner: The name of the dog's owner (string)
 *
 * Description: This structure holds information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

#endif
