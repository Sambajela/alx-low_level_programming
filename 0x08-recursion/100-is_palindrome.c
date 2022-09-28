#include "main.h"

/**
 * check - checks if a string is a palindrome
 * @s: string to be checked
 * @start: start index
 * @end: end index
 * @flag: flag to indicate if string is a palindrome
 * 
 * Return: void
 */
void check(char *s, int start, int end, int flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		checks(s, start + 1, end - 1, flag);
	}
}

/**
 * is-palindrome - returns the 1 if s is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome
 */
int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * _strlen_recursion - calculates lenght of string
 * @s: string to be used
 *
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	int sum = o;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
