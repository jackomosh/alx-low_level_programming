#include "main.h"

/**
 * print_sign - this is the function of the task
 * @n: - character member
 * Return: return 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
