#include "main.h"

/**
 * _memcpy - copies an area in memory
 * @dest: destination address
 * @src: source memory
 * @n: number of bytes to copy in memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
