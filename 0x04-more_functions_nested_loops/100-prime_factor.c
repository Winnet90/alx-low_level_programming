#include <stdio.h>

/**
 * prime_factors - function that prints the largest prime factor of the number
 * Description: finds largest prime factor
 * main - entry point
 *
 * Return: void
 */

int main(void)
{
	prime_factors(612852475143);
	return (0);
}

void prime_factors(long test_num)
{
	long divisor = 2;

	while (divisor != test_num)
	{
		if (test_num % divisor == 0)
		{
			test_num /= divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", test_num);
}
