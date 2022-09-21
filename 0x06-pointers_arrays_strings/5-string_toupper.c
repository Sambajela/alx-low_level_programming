#include "main.h"
#include<stdio.h>
/**
 * string_toupper - change lowercase to uppercase
 * @str: string to be changed
 *
 * Return: address to the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
