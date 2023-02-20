#include <stdio.h>
/*
 * main - lower case with out e & q
 *
 * Reaturn: 0
 */
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar("\n");
return(0);
}

