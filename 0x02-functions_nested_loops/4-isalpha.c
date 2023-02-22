#include "main.h"
/**
 * _isalpha - Check main
 * @c: the character to check
 * Description: checks for alphabetic character
 * Return: 1 if c is a letter 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
