#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of parts
 *
 *  Return: void
 */

void print_diagonal(int n)
{
	int slash;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (slash = 0; slash < n; slash++)
		{
			for (space = 0; space < slash; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
