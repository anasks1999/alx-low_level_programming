#include "main.h"

/**
  * print_array - prints n elements of an array
  * @a: array
  * @n: the number of the element to print
  *
  * Return: void
  */
void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", *(a + i));
if (i == (n - 1))
break;
printf(", ");
i++;

}
printf("\n");
}
