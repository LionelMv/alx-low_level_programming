#include "main.h"

/**
 * _pow_recursion - calculates the power of a number.
 * @x: the base integer.
 * @y: the power number.
 * Return: the value of the power.
 * if y is lower than 0 return -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
