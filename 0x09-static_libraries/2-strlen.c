#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: no return.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
