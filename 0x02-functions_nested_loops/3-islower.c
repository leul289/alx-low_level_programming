#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 *
 * @c: the charactors in ASCII code
 *
 * Return: 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
