#include "main.h"
/**
*_strchr - finds character in string
*@s: string
*@c: character
*Return: pointer to first appearance of c character
*/
char *_strchr(char *s, char c)
{
unsigned int a = 0;
for (; *(s + a) != '\0'; a++)
if (*(s + a) == c)
return (s + a);
if (*(s + a) == c)
return (s + a);
return ('\0');
}
