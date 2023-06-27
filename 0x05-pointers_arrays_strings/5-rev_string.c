#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
*/

void rev_string(char *s)
{
	int l = 0;
	int i;
	int temp;

	while (s[l])
		l++;
	for (i = 0; i < l; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
