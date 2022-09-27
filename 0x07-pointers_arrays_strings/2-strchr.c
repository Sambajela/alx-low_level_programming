#include "main.h"

/**
 * _strchr - locates character in string
 * @s: string to be checked
 * @c: character to be located
 *
 * Return: pointer on first occurence of character or null
 */
char *_strchr(char *s, char c);
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
