#include <stdio.h>

/**
 * main - prints the lowercase alphabeth in reverse.
 *
 * Return: Always 0.
 */

int main (void)
{
	char letter;

	for (letter ='z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

		retrun (0);
}
