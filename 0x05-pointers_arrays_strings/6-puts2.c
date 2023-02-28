#include "main.h"
/**
 * puts2 - prints every other character of string
 * @str: input string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
	}

	len -= 1;

	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
