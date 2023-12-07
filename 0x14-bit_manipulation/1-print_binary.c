#include "main.h"

/**
 * _pow - calculates base ^ power
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of base ^ power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int d;

	num = 1;
	for (d = 1; d <= power; d++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int a, b;
	char c;

	c = 0;
	a = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (a != 0)
	{
		b = n & a;
		if (b == a)
		{
			c = 1;
			_putchar('1');
		}
		else if (c == 1 || a == 1)
		{
			_putchar('0');
		}
		a >>= 1;
	}
}
