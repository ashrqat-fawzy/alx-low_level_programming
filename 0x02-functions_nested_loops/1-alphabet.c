#include "main.h"

/**
* main - Entry point
*
*Description: print the alphabet - unilizes on the _putchar function to print
* the he alphabet, in lowercase
*
*
*

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	
}
