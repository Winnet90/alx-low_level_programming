#include "main.h"

/**
 *_puts - prints a string, followed by a new line
 *@str: is the string to be checked
 *
 * Return:length of the string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar ('\n');

}

