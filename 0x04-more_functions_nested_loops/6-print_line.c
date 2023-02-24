#include "main.h"
/**
 * print_line - draws straight line in the terminal
 * @n: input parameter
 * Return: nothing
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
