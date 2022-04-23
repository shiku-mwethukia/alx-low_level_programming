#include "main.h"
/**
*reverse_array - reverses content of array
*of integers
*@a: array
*@n: number of elements of array
*Return: no return
*/
void reverse_array(int *a, int n)
{
int c, d, temp;

for (c = 0; c < n - 1; c++)
{
for (d = c + 1; d > 0; d--)
{
temp = *(a + d);
*(a + d) = *(a + (d - 1));
*(a + (d - 1)) = temp;
}
}
}
