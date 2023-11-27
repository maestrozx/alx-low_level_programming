#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"
/**
* main - tests the code
*
* Return: 0 if code is a success.
*/
int main(void)
{
int a;
int b;
a = ABS(-98) * 10;
b = ABS(98) * 10;
printf("%d, %d\n", a, b);
return (0);
}
