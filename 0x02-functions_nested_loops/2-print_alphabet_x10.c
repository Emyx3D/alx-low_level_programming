#include "main.h"

/**
 * print_alphabet_x10 - printt alphabet 10 times
 *
 * Return Always 0
 */

void print_alphabet_x10(void)
{
	int num, n;

	for (num = 0; num <= 9; num++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);

		}
		_putchar('\n');
	}
}
