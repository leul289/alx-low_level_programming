#include "main.h"
/**
 * main - a function that prints the alphabet, in lowercase, and new line.
 *
 * Return: 0
 */
void print_alphabet(void);
{
	char bet;

for (bet = 'a'; bet <= 'z'; bet++)
	{
		_putchar(bet);
	}
putchar('\n');
return (0);
}
