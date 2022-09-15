#include "main.h"

/**
 *print_triangle - a function that prints a triangle
 *@size: size of the triangle
 *Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int p, j, t;

	if (size <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (p = 0; j <= (size - 1); j++)
		{
			for (p = 0; p < (size - 1) - j; p++);
			{
				_putchar(' ');
			}
			for (t = 0, t <= j; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
