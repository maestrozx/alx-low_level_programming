#include "main.h"
/**
* get_endianness - checks endianness
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
int i;
char *c;
c = (char *)&i;
return (*c);
}
