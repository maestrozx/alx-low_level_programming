#include <stdio.h>
/**
* _putchar - defines char to std output.
* _puts_recursion - prints a string.
* @str: string to be printed.
* Return: Nothing.
*/
int _putchar(char c)
{
return putchar(c);
}
void _puts_recursion(char *str)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
_putchar(*str);
_puts_recursion(++str);
}
