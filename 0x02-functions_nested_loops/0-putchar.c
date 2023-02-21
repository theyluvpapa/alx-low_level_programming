#include "main.h"
#include <unistd.h>
/**
 * main - Check description
 * Description: It prints '_putchar' followed by a newline
 * Return: 0
 */
int main(void)
{
	const char *message = "_putchar\n";

	write(STDOUT_FILENO, message, 9);
	return (0);
}
