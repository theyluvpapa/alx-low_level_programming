#include "main.h"
/**
 * _strcat - pointer variable
 * @dest: input string (destination)
 * @src: Input string (Source)
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
