#include "main.h"

/**
 * _strspn - returns number of bytes in s with bytes from accept only.
 * @s: the inital character segment
 * @accept: the charcters in s to count
 * Return: number of charcters in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int index;

	while (*s != '\0')
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				n++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
