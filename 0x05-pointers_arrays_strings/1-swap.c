#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: pointer
 * @b: pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
