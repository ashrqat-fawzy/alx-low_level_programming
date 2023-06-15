#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the sizes of various data types
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1,q,59);
	return (1);
}
