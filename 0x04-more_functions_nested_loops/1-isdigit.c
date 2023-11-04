#include <stdio.h>


/**
 * _isdigit - function that checks if a number is a digit
 * Return: 1 and 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
