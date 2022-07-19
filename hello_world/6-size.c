#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints the size of various types
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", size(char));
	printf("Size of an int: %d byte(s)\n", size(int));
	printf("Size of a long int: %ld byte(s)\n", size(long int));
	printf("Size of a long long int: %lld byte(s)\n", size(long long int));
	printf("Size of a float: %f byte(s)\n", size(float));
	return (0);
}
