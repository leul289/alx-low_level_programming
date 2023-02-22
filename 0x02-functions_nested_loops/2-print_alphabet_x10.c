#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	int i;

	for (i = 1; i <= 10; i++)
	{
	for (a = 97; i <= 122; i++)
	{
	_putchar(a);
	}
	_putchar('\n');
	}
}
