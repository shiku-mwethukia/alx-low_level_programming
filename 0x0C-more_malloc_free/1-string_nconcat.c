
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings
*@s1: first string
*@s2: second string
*@n: number of bytes to include of @s2
*Return: newly allocated space in memory;
*NULL if function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ar;
unsigned int i = 0;
unsigned int j = 0;
unsigned int a;
unsigned int b;
unsigned int c = 0;
unsigned int len;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
if (j > n)
j = n;
len = i +j;
ar = malloc(sizeof(char) * (len + 1));
if (ar == NULL)
return (NULL);
for (b = 0; b < i; b++)
ar[c++] = s1[b];
for (a = 0; a < j; a++)
ar[c++] = s2[a];
ar[c] = '\0';
return (ar);
}

