#include "main.h"

/**
 * swap_int - swap value of 2 integers
 * @a: first int
 * @b: second int
 *
 * Return: 0 Always
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
