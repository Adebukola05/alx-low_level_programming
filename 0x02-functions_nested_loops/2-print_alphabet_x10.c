#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (i = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}