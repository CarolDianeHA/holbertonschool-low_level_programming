#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */
int _atoi(char *s)
{
	int i;
	int j;
	int res = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] >= '0' && s[j] <= '9'; j++)
		{
			res = res * 10 + s[i] - '0';
		}
	}
	return (res);
}
