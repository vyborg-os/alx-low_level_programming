#include "main.h"
#include <ctype.h>

/**
 * _isalpha -  A program to print outlower case
 *@c: A chracter value
 *
 * Return: 0
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
