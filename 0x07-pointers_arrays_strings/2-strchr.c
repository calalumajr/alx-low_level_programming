#include "main.h"

/**
 * _strchr - returns a pointer of a defined character in a string
 * @s: pointer to a chracter in memory
 * @c: the character in a string to define
 * Return: returns the pointer s or null if fail
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
