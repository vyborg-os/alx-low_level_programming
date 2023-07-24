#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - A function to print a string in reverse mode
 * @s: A String  variable
 * Return : void
 */

void print_rev(char *s)
{
	int i;
	int sLen = strlen(s);

	for (i = sLen - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
