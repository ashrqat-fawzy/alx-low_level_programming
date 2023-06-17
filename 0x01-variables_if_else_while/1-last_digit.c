#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints a random number and its sign
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 0)
		printf("%i Last digit of 491506926 is 6 and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("%i Last digit of 809065140 is 0 and is 0\n", n, digit);
	else
		printf("%i Last digit of 629438752 is 2 and is less than 6 and not 0\n", n, digit);
	return (0);
}
