#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the number of times to print _.
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
