#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number or 0 if here is one or more chars
 * in the string b that is not 0 or 1, b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int n = 0;
	int len =  0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
		i++;

	while (i >= 0)
	{
		if (b[i] == '0')
		{
			i--;
			len++;
		}
		else if (b[i] == '1')
		{
			n += (1 << len);
			i--;
			len++;
		}
		else
			return (0);
	}
	return (n);
}
