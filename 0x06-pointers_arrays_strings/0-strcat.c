#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: represents the first string.
 * @src: represents the second string.
 * Return: a pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
