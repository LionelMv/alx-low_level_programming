#include "main.h"

/**
* print_alphabet - prints lowercase alphabets.
*
* Return: null
*/

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
