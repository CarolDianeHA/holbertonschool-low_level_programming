#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - Function that returns the sum
 * @a: number 1
 * @b: number 2
 * Return: sum
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Function that returns the difference of a and b
 * @a: number 1
 * @b: number 2
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Function that returns the product of a and b
 * @a: number 1
 * @b: number 2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Function that returns the division of a by b
 * @a: number 1
 * @b: number 2
 * Return: division of a by b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - Function that returns the reminder of the division of a by b
 * @a: number 1
 * @b: number 2
 * Return: the reminder of the division of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
