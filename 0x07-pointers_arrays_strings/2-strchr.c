#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: char to locate
 * Return: pointer to char or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
