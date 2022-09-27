#include "main.h"

/**
 * _strspn - gets lenght of prefix substring
 * @s: string
 * @accept: main string
 *
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
