#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 *  if n is greater than zero returns 1 and prints +
 * if n is zero return 0 and prints 0
 * if n is less than zero Returns -1 and prints -
 *
 * @n: input number as an integer.
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
