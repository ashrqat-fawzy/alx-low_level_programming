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
	int d2;

	for (d = 0; d <= 9; d++)
	{
		for (d1 = d + 1; d1 <= 9; d1++)
		{
			for (d2 = d1 + 1; d2 <= 9; d2++)
			{
				putchar(d + '0');
				putchar(d1 + '0');
				putchar(d2 + '0');
			if (d != 7 || d1 != 8 || d2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}	}
	}
	putchar('\n');
	return (0);
}
