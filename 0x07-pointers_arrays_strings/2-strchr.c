#include "main.h"

/**
* *_strchr - filles memory with a constant byte.
*
*@s: pointer to put the constant
*@c: constant
*
*Return: pointer
*/
char *_strchr(char *s, char c)
{
	 int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\n');
}
