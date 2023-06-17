#include <stdio.h>

/**
* main - Entry point
*
* Description: A C program that combinations of single-digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		putchar(',');
		putchar(' ');
		d++;
	}
	putchar('\n');
	return (0);
}
