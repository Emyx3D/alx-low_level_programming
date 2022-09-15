nclude "main.h"

/**
 *  * print_square - a function that prints a square, followed by a new line
 *@size: size of both width and length
 *Return: a square made of '#'
 */
void print_square(int size)
{
	int so, to;

	if (size <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (so = 1; so <= size; so++)
		{
			_putchare('#');
			for (to = 2; to <= size; to++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
