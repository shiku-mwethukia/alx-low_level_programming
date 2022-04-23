#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are equals
 * another number if not
*/

int _strcmp(char *s1, char *s2)
{
int a = 0, op = 0;

while (op == 0)
{
if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
break;
op = *(s1 + a) - *(s2 + a);
a++;
}
return (op);
}

