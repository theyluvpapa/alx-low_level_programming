#include <stdio.h>
/**
 * main - prints numbers from 1-100
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return (0);
}
