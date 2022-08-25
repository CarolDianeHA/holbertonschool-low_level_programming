#include <stdio.h>
#include "main.h"
/**
 * helper - helps decide if i'm right
 * @i: integer to help
 * @n: integer to test
 * Return: value
 */
int helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	return (1);
}
/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 * Return: integer
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper(i, n));
}
