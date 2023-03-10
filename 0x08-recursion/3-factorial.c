#include "main.h"
/**
 * factorial - function returns factorial of number input
 * @n: Input num
 * Return: -1 if n < 0 & 1 if n <= 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
