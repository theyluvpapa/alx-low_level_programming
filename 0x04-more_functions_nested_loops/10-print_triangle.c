#include "main.h"
/**
 * print_triangle - prints triangle then new line
 * @size: input parameter
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size - row; col++)
		{
			_putchar(' ');
		}
		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}
	}
}
