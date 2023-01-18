#include "main.h"

/**
 * _strstr - locates a substrin to rest
 * @haystack: string
 * @needle: string
 * Return: a ponter tothe substring
 */

char *_strstr(char *haystack, char *needle)
{
	int needle_len = 0;
	int haystack_len = 0;
	int i;

	/*calculate the lengths of the haystack ad needle strings*/
	while (haystack[haystack_len] != '\0')
	{
		haystack_len++;
	}
	while (needle[needle_len] != '\0')
	{
		needle_len++;
	}

	/*compare the substrings starting at the current index*/
	for (i = 0; i < haystack_len - (needle_len + 1); i++)
	{
		int j;

		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (haystack + i);
		}
	}
	return ('\0');
}

