#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{

int longi = 0;

while (longi != '\0')
{
longi++;
s++;
}
return (longi);
}
