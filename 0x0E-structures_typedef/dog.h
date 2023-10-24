#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a function struct is dog
 * @name: The puppys name
 * @age: The dogs age 
 * @owner: The owners name 
 * Return: The dogs name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
