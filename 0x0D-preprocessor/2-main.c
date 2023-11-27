#include <stdio.h>
/**
* main - Entry point of the program.
*
* Description:
* This program prints the name of the source file using the FILE macro.
*
* Return:
* Always 0 to indicate successful execution.
*/
int main(void)
{
/**
* FILE - Macro representing the name of the current source file.
*
* Description:
* This macro expands to a string literal containing the name of the
* current source file.
*/
#define FILE __FILE__
printf("The file name is: %s\n", FILE);
return (0);
}
