#include <stdio.h>
/**
 * main -prints positive single digit numbers
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
