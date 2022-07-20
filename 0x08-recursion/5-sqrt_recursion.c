#include "main.h"

int _sqrt(int num, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to be square rooted
 * Return: the value of the square root.
 */
int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - the function that actually square roots the number.
 * @num: the number to be square rooted.
 * @i: iteration.
 * Return: the value of the square root.
 */
int _sqrt(int num, int i)
{
	if (i * i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (_sqrt(num, (i + 1)));
}
