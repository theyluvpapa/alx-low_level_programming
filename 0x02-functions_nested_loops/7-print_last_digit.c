#include "main.h"
/**
 * print_last_digit - Check main
 * @num: integer input
 * Description: prints last digit of a number
 * Return: Last value of last digit
 */
int print_last_digit(int num)
{
	int digit;

	if (num < 0)
	{
		digit = -1 * (num % 10);
	}
	else
	{
		digit = num % 10;
	}
	_putchar(digit + '0');
	return (digit);
}
