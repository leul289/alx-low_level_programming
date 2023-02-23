#include "main.h"
/**
 * print_most_numbers - function that prints from 0 to 9
 * Do not print 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i != 52)
{
if (i != 50)
{
_putchar(i);
}
}
}
_putchar('\n');
}
