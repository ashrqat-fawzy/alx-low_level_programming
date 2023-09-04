#include "main.h"
#include <stdlib.h>

 /**
 * create_array - creates an array of characters with the given size and initializes
 * them with a specified character.
 * @size: the size of the array to be created.
 * @c: character used for initialization of the array.
 *
 * Return: If size is zero or malloc fails to allocate the needed memory, returns NULL. 
 * Otherwise, returns a pointer to the created array.
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
