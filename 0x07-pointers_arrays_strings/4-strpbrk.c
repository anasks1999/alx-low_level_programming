#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: substring
 *
 * Return: s that matches the bytes in accept, otherwise NULL.
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;

while (s[i])
{
while (accept[j])
{
if (s[i] == accept[j])
{
return (s);
}
s++;
j++;
}
i++;
j = 0;
}
return (NULL);
}
