#include "main.h"

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			_putchar('f');
		else if (i % 3 == 0)
			_putchar('b');
		else if (i % 5 == 0)
			_putchar('z');
		else
			_putchar(i + '0');
	}
}
