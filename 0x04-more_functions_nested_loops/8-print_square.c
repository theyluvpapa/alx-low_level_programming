#include "main.h"
/**
 * print_square - print a square followed by new line
 * @size: input size of square
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
