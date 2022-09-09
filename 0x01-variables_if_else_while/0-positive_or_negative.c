#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/* more headers got there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	switch(num > 0)
	{
		case 1:
			printf("%d is positive");
		break;
		case 0:
			switch (num == 0)
			{
				case 0:
					printf("%d is zero");
					break;
				case 1:
					printf("%d is negative");
					break;
			}
		default:
			printf("%d is invalid");
			break;
	}

}
