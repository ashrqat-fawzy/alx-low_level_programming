#include "main.h"
#include <stdlib.h>

 /**
 * create_array - creates an array of chars, initialized with a specific char
 * @size: size of the array to be created
 * @c: char to initialize the array with
 *
 * Return: pointer to the created array, or NULL if size is 0 or if memory
 * allocation fails
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
