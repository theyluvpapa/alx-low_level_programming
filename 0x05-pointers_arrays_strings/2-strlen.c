#include "main.h"
/**
 * _strlen - returns length of string
 * @s: The string to get the length of
 *
 * Return: The length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
