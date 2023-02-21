#include <stdio.h>
/**
 * main - a function that prints the alphabet, in lowercase, and new line.
 *
 * Return: 0
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
			a++;
	}
putchar('\n');
return (0);
}
