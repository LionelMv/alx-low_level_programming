#include "main.h"

/**
 * print_diagonal - draws a diagonal line.
 * @n: the number of times \ is printed.
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, k;

	while (i < n && n > 0)
	{
		k = 0;

		while (k < i)
		{
			_putchar(' ');
			k++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
