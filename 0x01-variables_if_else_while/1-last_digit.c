#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	int lastVal;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastVal = n % 10;
	if (lastVal > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastVal);
	}
	else if (lastVal == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastVal);
	}
	else if (lastVal < 6 && lastVal != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastVal);
	}
	return (0);
}

