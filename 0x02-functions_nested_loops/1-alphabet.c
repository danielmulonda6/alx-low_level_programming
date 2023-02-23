#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int j;

	for (letter = 'a'; j <= 'z'; letter++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
