#include <stdio.h>

/**
 * main - prints numbers from 1 to 100.
 * for multiples of 3, print Fizz
 * for multiples of 5, print Buzz
 * for multiples of 3 and 5, print FizzBuzz.
 * Return: 0.
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}
