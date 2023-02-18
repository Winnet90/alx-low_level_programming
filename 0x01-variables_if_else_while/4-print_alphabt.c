#include <stdio.h>
/**
 * main - print the alphabet in lowercase except q and e
 *
 * Return: 0 Always
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);

}
