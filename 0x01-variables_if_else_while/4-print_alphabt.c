#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter, e, q;

	e = 'e';
	q = 'q';
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != e && letter != q)
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
