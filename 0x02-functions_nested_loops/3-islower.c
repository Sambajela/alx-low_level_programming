#include "main.h"
/**
 * _islower - to check for lowercase alphabet
 *
 * @c: to print 1 if true 0 if false
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
