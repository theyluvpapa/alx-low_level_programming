#include "main.h"
/**
 * print_rev - prints string in reverse the new line
 * @s: string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len))
	{
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
