#include <stdio.h>
#ifndef FILE
#define FILE __FILE__
#endif
/*
* main - Returns filename of sorce file.
*
* Return: Always 0 indicating successful execution.
*/
int main(void)
{
printf("The file name is: %s\n", FILE);
return (0);
}
