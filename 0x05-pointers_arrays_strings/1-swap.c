#include "main.h"

/**
 * swap_int - swap value of two integers
 * @a: parameter
 * @b: parameter
 * Result: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
