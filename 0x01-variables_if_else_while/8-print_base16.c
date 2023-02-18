#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexnum;
	char letters;

	for (hexnum = '0'; hexnum <= '9'; hexnum++)
	{
		putchar(hexnum);
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
