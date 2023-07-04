#include "main.h"

/**
* *_memcpy - filles memory with a constant byte.
*
*@dest: pointer to put the constant
*@src: constant
*@n: max bite to use
*Return: pointer s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
