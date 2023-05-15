#include "shell.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_string("Hello, Betty!\n");
	return (0);
}

/**
 * print_string - Prints a string to stdout
 * @string: The string to print
 */
void print_string(char *string)
{
	while (*string)
	{
		putchar(*string++);
	}
}
