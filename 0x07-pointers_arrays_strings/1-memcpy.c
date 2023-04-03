#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area where to copy
 * @src: copy n bytes from src to dest
 * @n: n bytes to copy
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
int length = 0;

while (dest[length])
length++;

while (i < n)
{
dest[length] = src[i];
length++;
i++;
}
return (dest);
}
