#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number.
 */

int largest_number(int a, int b, int c)
{
int largest;

if ((a > b) && (a > c))
{
largest = a;
}
if ((b > a) && (b > c))
{
largest = a;
}
if ((c > a) && (c > b))
{
largest = c;
}

return (largest);
}
