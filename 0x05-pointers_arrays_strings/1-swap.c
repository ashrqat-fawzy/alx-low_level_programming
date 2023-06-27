#include "main.h"

/**
 * swaps the values of two integers.
 * @n: input integer.
 * Return: no return.
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
