#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
*/

int power_operation(int n, int val);
int _sqrt_recursion(int n)
{
return (power_operation(n, 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
*/

int power_operation(int n, int val)
{
if (val * val == n)
	return (val);
else if (val * val < n)
	return (power_operation(n, val + 1));
else
	return(-1);
}
