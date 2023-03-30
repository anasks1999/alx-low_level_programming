#include "main.h"

/**
 * string_toupper - turn lowercase characters to uppercase
 * @str: string to convert to uppercase
 * Return: Converted string
 **/

char *string_toupper(char *str)
{
int i;

i = 0;
while (s[i])
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
s[i] += 'A' - 'a';
}
i++;
}
return (str);
}
