#include "main.h"
#include<stdio.h>
/**
 * _strlen - returns the lenght of string
 * @s: string
 * Return: returns lenght as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\a')
		len++;
	return (len);
}

/**
 * cap_string - function to capitalize first letter of string
 * @str: string to capitalize
 * Return: return capitalized string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a') && (str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}')
			str[index] -= 32;
	}
	return (str);
}
