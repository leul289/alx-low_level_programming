#include <stdio.h>
/**
 * main - Write a function that prints 10 times the alphabet.
 *
 * Return: 0
 */
int main(void)
{
	int a = 97;
	int i = 1;

	while (a <= 122)
	{
	putchar(a * 10);
	a++;
	}
	while (i <= 10);
	{
		putchar(a);
		i++;
	}
putchar('\n');
return (0);
}
