#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
