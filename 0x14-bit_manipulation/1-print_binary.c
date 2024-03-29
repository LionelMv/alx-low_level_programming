#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long integer.
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		/*putchar prints one character at a time*/
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
