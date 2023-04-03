#include "main.h"

/**
 * strspn - get the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes where the prefix is located in 's'.
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0;

while (accept[0] != s[i])
i++;

return (++i);
}
