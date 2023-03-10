#include "main.h"
#include <stdio.h>
/**
 * main - progam prints number of arguments
 * @argc: Number of arguments
 * @argv: Argument values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
