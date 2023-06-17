#include <stdio.h>

/**
* main - Entry point
*
* Description: A C program that prints
* all possible different combinations of two digits
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int d;
	int d1;

	for (d = 0; d <= 9; d++)
	{
		for (d1 = d + 1; d1 <= 9; d1++)
		{
			putchar(d + '0');
			putchar(d1 + '0');
			if (d != 8 || d1 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
