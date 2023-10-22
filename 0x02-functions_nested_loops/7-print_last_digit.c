#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @i: - function parameter
 * Return: i
 */
int print_last_digit(int i)
{
i = i % 10;
if (i < 0)
i = -i;
_putchar(i + '0');
return (i);
}
