#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	l = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        if ( n > 5)
        {
	  printf("the last digit of %d" , n "is %d" ,l "and is greater than 5")
        }
        else if (n = 0)
        {
	  printf("the last digit of %d\n" , n "is %d" ,l " and is 0");
        }
        else
          printf(" the last digit of %d\n" , n "is %d" ,l"less than 6 and not 0");
        return (0);

}



