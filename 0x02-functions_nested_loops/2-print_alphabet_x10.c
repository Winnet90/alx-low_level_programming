#include "main.h"
/**
 *print_alphabet_x10 - fuction that prints the alphabet 10 times in lowercase
 *
 *Return: 0 Always
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
