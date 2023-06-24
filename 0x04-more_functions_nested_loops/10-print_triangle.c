#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= i; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
