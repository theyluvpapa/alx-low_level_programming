#include "main.h"
int find_sqrt(int n, int start, int end);
/**
 * _sqrt_recursion - returns natural sqr root of num
 * @n: number input
 * Return: sqr root of n / -1 if n does not have a natural sqr root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - function to recursively find sqr root
 * @n: the number to find the square root of
 * @start: Start point of search
 * @end: end point of search
 * Return: square root of n or -1 if no square root
 */
int find_sqrt(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}

	mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	if (mid * mid < n)
	{
		return (find_sqrt(n, mid + 1, end));
	}
	else
	{
		return (find_sqrt(n, start, mid - 1));
	}
}
