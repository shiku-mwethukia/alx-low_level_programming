#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: pointer to dest
*/
char *rot13(char *s)
{
int count = 0, a;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
while (*(s + count) != '\0')
{
for (a = 0; a < 52; a++)
{
if (*(s + count) == alphabet[a])
{
*(s + count) = rot13[a];
break;
}
}
count++;
}
return (s);
}

