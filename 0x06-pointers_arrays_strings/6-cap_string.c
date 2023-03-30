#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: output the string in capitalized format
 */

char *cap_string(char *str)
{
int i = 0;

while (str[i])
{
if (*(str + i) >= 'a' && *(str + i) <= 'z')
{
str[i] += 'A' - 'a';
}
i++;
}

return (str);
}
