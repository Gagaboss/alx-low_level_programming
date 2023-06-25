#include <stdio.h>
#include "math.h"

/**
 * main - prints the largest prime factor of 612852475143
 * Return: always 0 (success)
 */

int main(void)
{
	long x, masf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number & x == 0)
	{
	masf = number / x;
	}
	}
	printf("%ld\n", masf);
	return (0);
}
