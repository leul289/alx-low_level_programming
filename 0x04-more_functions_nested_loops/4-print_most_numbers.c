#include "main.h"
/**
 * print_most_numbers - function that prints from 0 to 9
 * Do not print 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
int i = 48;

while (i <= 57)
{
if (i == 50 && i == 52)
{
continue;
_putchar(i);
}
_putchar('\n');
}
}
