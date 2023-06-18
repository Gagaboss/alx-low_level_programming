#include <stdio.h>

/**
 * main - prints the size of various types based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int mod(void)

{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	print("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float %zu byte(s), sizeof(float));
	return (0);
}
