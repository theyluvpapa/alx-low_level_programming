#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i;

	while (s[len])
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
