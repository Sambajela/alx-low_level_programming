#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: string in which to check for needle
 * @needle: substring to find haystack
 *
 * Return: pointer to beginning of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned in i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
