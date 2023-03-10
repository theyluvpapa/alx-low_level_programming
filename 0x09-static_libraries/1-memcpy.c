#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination of copy
 * @src: source of copy
 * @n: number of bytes to be copied
 * Return: pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (temp);
}
