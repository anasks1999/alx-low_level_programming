#include "main.h"

/**
 * *string_toupper - change all lowerCase to upperCase of a string
 * @str: string to turn to upperCase
 *
 * return: upper case string
 */

char *string_toupper(char *str)
{
int i;

i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] += 'A' - 'a';
}
i++;
}
return (str);
}
