#include "variadic_functions.h"
/**
*sum_all_of_them - returns sum of all parameters
*@n: number of parameters passed
*Return: If n == 0 - 0
         Else sum of all parameters
*/
int  sum_them_all - (const unsigned int n, ...)
{
va_list nums;
unsigned int a;
int sum = 0;
va_start(nums, n);
for (a = 0; a < n; a++)
sum += va_arg(nums, int);
va_end(nums);
return (sum);
}

