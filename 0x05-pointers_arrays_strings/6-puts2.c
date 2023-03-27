#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * followed by new line
 * @str: pointer's variable
 *
 * Return: void.
 */

void puts2(char *str)
{
int i;
int len = 0;
int unpair = 0;

while (*(str + len) != '\0')
{
len++;
}
len--;

i = 0;
while (*(str + i) <= *(str + len))
{
if (unpair % 2 != 0 || unpair == 0)
_putchar(*(str + i));
i++;
unpair++;
}
_putchar('\n');
}
