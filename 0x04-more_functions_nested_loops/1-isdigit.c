#include <stdio.h>
#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9)
 *
 * @c: input charactor ASCII code
 *
 * Return: 0
 */
int _isdigit(int c)
{
if (c >= 49 && c <= 57)
{
_putchar(c);
return (1);
}
else if (c < 49 && c > 57)
{
return (0);
}
else
{
return (0);
}
_putchar('\n');
}
