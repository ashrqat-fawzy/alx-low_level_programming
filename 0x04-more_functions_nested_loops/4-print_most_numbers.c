#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
*/

void print_numbers(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		if ((ch + '0') == 2 || (ch + '0') == 4)
		{
			continue;
		}
		_putchar(ch + '0');
	}
	_putchar('\n');
}
