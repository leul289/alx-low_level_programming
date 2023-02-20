#include <stdio.h>
/**
 * main - intery point
 *
 * Return: 0
 */
int main(void)
{
int b;
b = 97;
while
(b <= 122)
{
if (b == 101 || b == 113)
{
b++;
continue;
}
putchar(b);
b++;
}

putchar('\n');
return (0);
}
