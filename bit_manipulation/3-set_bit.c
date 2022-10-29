#include "main.h"
/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 * @n: pointer for number
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	mask = mask << index;

	*n = *n | mask;

	return (1);

}
