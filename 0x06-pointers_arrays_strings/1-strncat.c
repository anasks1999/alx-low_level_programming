#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: appended string
 * @src: string to be appended
 * @n: n bytes from src
 *
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
int str1;
int str2;

str1 = 0;
while (dest[str1] != 0)
str1++;
dest[str1] = ' ';

str2 = 0;
while (src[str2] != 0 && str2 <= n)
{
dest[str1] = src[str2];
str1++;
str2++;
}
dest[str1] = '\0';

return (dest);
}
