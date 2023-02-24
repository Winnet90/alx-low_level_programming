#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 *main - entry point
 *fizz_buzz - function declaration
 *Description - prints fizz, buzz or fizbuzz for multiples
 *
 *Return: void
 */

int main(void)
{
	fizz_buzz(100);
	return (0);
}

void fizz_buzz(int range)
{
	int number;

	for (number = 1; number <= range; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", number);
		}
		if (number != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}

