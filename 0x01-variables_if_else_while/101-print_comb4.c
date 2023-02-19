#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 Always
 */
int main(void)
{
	int a, b, m;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (m = 50; m < 58; m++)
			{
				if (m > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(m);
					if (a != 55 || b != 56)
					{
						putchar(',');
						putchar(' ');

					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
