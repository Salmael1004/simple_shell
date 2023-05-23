#include "shell.h"

/**
 * prompt - checks mode and prints prompt
 * @file: file stream
 * @buffer: buffer
**/
void prompt(int file, struct stat buffer)
{
	fstat(file, &buffer);

	if (S_ISCHR(buffer.st_mode))
		_puts(PROMPT);
}

/**
  * _puts - prints a string
  * @string: string to print
  * Return: void
**/
void _puts(char *string)
{
	unsigned int lnt;

	lnt = _strlen(str);

	write(STDOUT_FILENO, str, lnt);
}
