#include "main.h"

/**
 * function - function that print alphabet in lowercase
 *
 * Return: 0 Always
 */
void print_alphabet(void);
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		_putchar(m);
	putchar('\n');
}
