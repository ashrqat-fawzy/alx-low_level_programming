#include "main.h"

 /**
 * p _detets if an input is prime or not.
 * is_prime_number if an input is prime or not.
 * @n: input number.
 * @i: iterator.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int p(int n, int i)
{

if (n % i == 0)
	return (0);
else if (n <= 2)
{
	if (n == 2)
		return (1);
	else
		return (0);
}
if (i * i > n)
{
	return (1);
}
return (p(n, i + 1));
}

 /**
 * is_prime_number if an input is prime or not.
 * p _detets if an input is prime or not.
 * @n: input number.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{

if (n <= 0 || n == 1)
	return (0);

return (p(n, 2));
}
