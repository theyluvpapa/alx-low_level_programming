#include "main.h"
/**
 * print_numbers - prints numbers from 0-9, then new line
 * Return: nothing
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
