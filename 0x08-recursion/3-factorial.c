#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: int
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
