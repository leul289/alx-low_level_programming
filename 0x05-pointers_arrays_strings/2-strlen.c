#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{

int le = 0;

while (le != '\0')
{
le++;
s++;
}
return (le);
}
