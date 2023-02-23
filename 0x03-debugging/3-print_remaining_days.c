#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 *
 * @m - month as an integer
 * @d - day as an integer
 * @y - year as an integer
 *
 * Return: 0
 */
void print_remaining_days(int m, int d, int y)
{
if ((y % 100 == 0 && y % 400 == 0) || (y % 4 == 0))
{
if (m > 2 && d >= 60)
{
d++;
}
printf("day of year: %d\n", d);
printf("remaining day: %d\n", 366 - d);
}
else
{
if (m == 2 && d == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", m, d - 31, y);
}
else
{
printf("day of the year: %d\n", d);
printf("remaining day: %d\n", 366 - d);
}
}
}
