#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - it prints numbers
*@separator: string yo be printed in between numbers
*@n: the number of integers passed to the function
*
*Return:no return
*/
void print_numbers(const char *separator, const unsigned int n, ...);
{
va_list nums;
unsigned int a;
va_start(nums, n);
for (a = 0; a < n; a++)
{
printf("%d", va_arg(nums, int));
if (a != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
