#include "main.h"
/**
 * _strcat - pointer variable
 * @dest: input string (destination)
 * @src: Input string (Source)
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
