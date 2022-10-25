#include "main.h"
/**
 * _strlen -returns length of string
 * @s: string input
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	return (count);
}
