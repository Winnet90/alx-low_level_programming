#include "main.h"

/**
 *_strncpy - function that copies a string
 *
 * @src: source string
 * @dest: The destination string
 * @n: characters to be copied
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
