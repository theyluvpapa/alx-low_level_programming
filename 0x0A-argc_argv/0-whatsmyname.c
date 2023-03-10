#include "main.h"
#include <stdio.h>
/**
 * main - program prints its name then new line
 * @argc: Number of arguments
 * @argv: Argument Value(s)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
