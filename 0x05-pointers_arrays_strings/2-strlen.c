#include <stdio.h>
#include <main.h>

/**
 * _strlen - function that returns the length of string
 * Return: Always 0 (sucess)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
