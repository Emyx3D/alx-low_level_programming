#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory area.
 * @scr: source memory area
 * @n: bytes 
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(desr + i) = *(src + i);
	}
	return (dest);
}
