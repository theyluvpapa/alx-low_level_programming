#include "main.h"
/**
 * _print_rev_recursion - function prints string in reverse
 * @s: String argument
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
