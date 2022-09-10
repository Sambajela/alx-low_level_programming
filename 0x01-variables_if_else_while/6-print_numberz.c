#include<stdio.h>
/**
 * main - print numbers from 0-10
 *
 * Description: use main function
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n < '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
