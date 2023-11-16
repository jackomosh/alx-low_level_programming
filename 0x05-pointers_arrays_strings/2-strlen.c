#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: parameter
 * Return: void
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != 0)
		c++;
	return (c);
}
