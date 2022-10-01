#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: parameter
 *
 * Description: returns the length of a string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int k = 0;

	while (*s++)
		k++;
	return (k);
}
