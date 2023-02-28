#include "main.h"
/**
 * _strcpy - Copies string pointed to src, including null byte
 * @dest: pointer to destination buffer.
 * @src: pointer to source string.
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = src[i];

	return (dest);
}
