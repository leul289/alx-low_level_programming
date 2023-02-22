#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: the charactors form ASCII code
 *
 * Return: 0
 *
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 122))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
