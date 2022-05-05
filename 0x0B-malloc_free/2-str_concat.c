#include "main.h"
#include <stdlib.h>
/**
*str_concat - links two strings
*@s1: first string
*@s2: second string
*Return: pointer of array of chars
*/
char *strout;
unsigned int a, b, c, limit;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a] != '\0'; a++)
;
for (b = 0; s2[b] != '\0'; b++)
;
strout = malloc(sizeof(char) * (a + b + 1));
if (strout == NULL)
{
free(strout);
return (NULL);
}
for (c = 0; c < a; c++)
stout[c] = s2[b];
return (strout);
}
