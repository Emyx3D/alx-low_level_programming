#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the begining of located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *rhaystack;
	char *qneedle;

	while (*haystack != '\0')
	{
		rhaystack = haystack;
		qneedle = needle;

		while (*haystack != '\0' && *qneedle != '\0' && *haystack == *qneedle)
		{
			haystack++;
			qneedle++;
		}
		if (!*qneedle)
			return (rhaystack);
		haystack = rhaystack + 1;
	}
	return (0);
}
