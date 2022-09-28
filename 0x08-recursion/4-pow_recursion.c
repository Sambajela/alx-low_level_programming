#include "main.h"

/**
 * _pow_recursion - prints x raised to power y
 * @x: integer
 * @y: power
 *
 * Return: x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
