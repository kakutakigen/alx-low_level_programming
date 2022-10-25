#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string input
 * Return: 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= o; count--)
		_putchar(s[count]);
	_putchar('\n');
}
