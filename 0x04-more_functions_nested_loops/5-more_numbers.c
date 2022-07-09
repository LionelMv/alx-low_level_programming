#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 * Return: 0.
 */

void more_numbers(void)
{
	int i;
	char j, k;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar('1');
				k = (j % 10);
			}
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}
