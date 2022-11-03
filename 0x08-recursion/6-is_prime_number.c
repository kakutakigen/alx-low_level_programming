#include "main.h"
/**
 * evaluate_num - recursion loop
 * @num: num
 * @iterator: integet to iterate
 * Return: 0
 */
int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}
	else if (num % iterator == 0)
	{
		return (0);
	}
	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterator + 1));
	}

	return (0);
}
/**
 * is_prime_number - determines prime or not
 * @n: integer
 * Return: 0
 */
int is_prime_number(int n)
{
	int iterator;

	iterator = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 0)
	{
		return (1);
	}

	return (evaluate_num(num, iterator));
}
