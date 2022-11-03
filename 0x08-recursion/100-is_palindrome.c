#include "main.h"
/**
 * palindromeChecker -checks string
 * @str: string to be checked
 * @len: length of string
 * @i: incrementor, starts at 0
 * Return: 1 if palindrome, 0 if not
 */
int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}
/**
 * _strlen_recursion - returns length of string
 * @s: string to check length of
 * Return: integer representing length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
/**
 * is_palindrome - check if string is palindrome
 * @s: string to check
 * Return: 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
