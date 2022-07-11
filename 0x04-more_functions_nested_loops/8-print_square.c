#include "main.h"

/**
 * print_square - prints a square.
 * @size: denotes the size of the square.
 * Return: void.
 */

void print_square(int size)
{
	int i = 0, k;

	while (i < size && size > 0)
	{
		k = 0;

		while (k < size)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
	_putchar('\n');
}
