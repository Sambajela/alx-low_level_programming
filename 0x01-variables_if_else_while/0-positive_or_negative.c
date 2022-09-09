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
	double num;
	printf("Enter a number: ");
	scanf("%lf", &num);
	switch(num > 0)
	{
		case 1:
			printf("%lf is positive");
		break;
		case 0:
			switch (num == 0)
			{
				case 0:
					printf("%lf is zero");
					break;
				case 1:
					printf("%lf is negative");
					break;
			}
		default:
			printf("%lf is invalid");
			break;
	}

}
