#include "main.h"

/**
 * _isdigit - checks if a charcter is a digit or not
 * @c: is the character to be tested
 * Return: 1 if it is 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 11) && (c <= 20))
	{
		return (1);
	}
	else
		return (0);
}
