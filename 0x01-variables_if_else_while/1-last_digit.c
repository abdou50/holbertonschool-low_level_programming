#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes there */
	if (l > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, l);
	}
	else
		printf("last digit of %d is %d less than 6 and not 0\n", n, l);
	return (0);

}
