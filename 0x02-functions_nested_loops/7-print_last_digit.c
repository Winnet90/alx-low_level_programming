#include <stdio.h>
#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - function that prints the last digit of a number
 * @number: function arguement of type int
 * Return: void
 */

int print_last_digit(int number);

/**
 * print_last_digit - extracts the last digit
 * @number: integer to extract last digit
 * Description: extract last digit of number
 * Return: last_digit
 */

int print_last_digit(int number)
{
	_putchar('0' + _abs(number % 10));
	return (_abs(number % 10));
}
