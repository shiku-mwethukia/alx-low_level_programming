#include "main.h"
/**
*unsigned int binary_to_uint
*@b: points to string of 0 and 1 chars
*Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dev_val = 0;
if (!b)
return (0);
for (i= 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_val = 2 * dec_val + (b[i] - '0');
}
return (dec_val);
}
