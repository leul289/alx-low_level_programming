#include "main.h"
/**
 * main - Write a function that prints 10 times the alphabet.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a = 97;
	int i = 1;

	while (a <= 122)
	{
	for (i = 0; i <= 10; i++)
	{
	_putchar(a);
	}
	_putchar(a);
	a++;
	}
_putchar('\n');
}
