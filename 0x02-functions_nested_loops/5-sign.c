#include "main.h"

/**
 *print_sign - is a function that prints the sign of a number
 *@n: number checked
 *Return: 1 if n is greater than zero, 0 when n is zero  otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
