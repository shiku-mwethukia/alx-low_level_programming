#include "main.h"
/**
*print_times_table - prints times table
*@n: times table to use
*Return:void
*/

void print_times_table(int n)
{

int a = 0, rep, b;

if (n < 0 || n > 15)
return;

while (a <= n)
{
for (b = 0; b <= n; b++)
{
