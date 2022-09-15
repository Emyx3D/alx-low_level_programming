#include "main.h"
#include <stdio.h>

/**
 * print_number - return 0-9
 */

void print_number(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
