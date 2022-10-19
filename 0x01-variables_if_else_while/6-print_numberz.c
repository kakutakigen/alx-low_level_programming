#include <stdio.h>
#include <stdlib.h>
/**
 * main -print numbers
 * Return: 0
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
