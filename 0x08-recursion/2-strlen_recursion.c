#include "main.h"

/**
 * _strlen_recursion - calculates the lenght of string
 * @s: string to be used
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
