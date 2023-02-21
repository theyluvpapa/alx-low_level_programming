#include "main.h"
/**
 * print_alphabet_x10 - Check main
 * Description: _putchar function to print alphabet in lowercase 10 times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char alph;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
