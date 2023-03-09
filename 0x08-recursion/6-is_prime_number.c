#include "main.h"
int _divisible(int num, int div);

/**
 * is_prime_number - function checks if number is prime.
 * @n: input integer
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (_divisible(n, div));
}

/**
 * _divisible - check if num is divisible
 * @num: the number to be checked
 * @div: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int _divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}

	if (div == num / 2)
	{
		return (1);
	}

	return (_divisible(num, div + 1));
}
