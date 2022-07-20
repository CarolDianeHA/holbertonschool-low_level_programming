#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prinst all single digit number of base 10 from 0,
 * using putchar function.
 * Return: 0
 */
int main(void)

{
	int x = 0;

		for (; x < 10; x++)
			putchar ('0' + x);
			putchar ('\n');
		return (0);
}
