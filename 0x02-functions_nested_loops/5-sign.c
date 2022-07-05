#include "main.h"

/**
 * print_sign - evaluates +ve,-ve, and zero numbers.
 *
 * @n: The character to evaluate
 *
 * Return: Get 1 if c is positive,
 * get 0 if it's 0, and
 * get -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
