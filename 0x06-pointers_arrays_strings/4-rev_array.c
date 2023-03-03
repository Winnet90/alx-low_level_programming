#include "main.h"
/**
 * reverse_array - reverse the contents of an array
 * @a:array
 * @n:number of elements in array
 *
 * Return:void
 */
void reverse_array(int *a, int n)
{
int i, m;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	m = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = m;
	}
}
