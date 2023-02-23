#include "main.h"
/**
 * _isupper - a function that checks for uppercase character.
 * @c: ASCII code
 * Return: 0
 */
int _isupper(int c)
{

if (c < 65 && c > 90)
{
_putchar(c);
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
