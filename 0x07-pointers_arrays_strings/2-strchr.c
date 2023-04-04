#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string
 * @s: pointer that point to the string target
 * @c: character to locate
 *
 * Return: first occurence of 'c' in the string 's', otherwise NULL.
 */

char *_strchr(char *arr, char c)
{
int count;

while (arr[count] != '\0')
{
if (arr[count] == c)
{
return (arr + count);
break;
}
count++;
}
if (arr[count] == '\0')
return (NULL);
}
