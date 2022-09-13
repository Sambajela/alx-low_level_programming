#ifndef MAIN_H_
#define MAIN_H_

void main(void);

#endif

#include<stdio.h>
#include<unistd.h>
#include "main.h"
/**
 * main - print putchar
 *
 * Description: use main function
 * Return: 0
 */
int main(void)
{
	char ch = '_putchar';

	putchar(ch);
	return (0);
}
