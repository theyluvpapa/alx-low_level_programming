#include "main.h"
#include <stdio.h>

/**
 * main - Program prints all arguements received
 * @argc: Number of arguements
 * @argv: Argument value(s)
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
