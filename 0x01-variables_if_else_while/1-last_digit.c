#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
l = n % 10;
if (n > 5)
{
	printf("Last digit of %i is %i and is greater than 5\n", l, n);
}
else if (n == 0)
{
	printf("Last digit of %i is %i is 0\n", l, n);
}
else if (n < 6 && n != 0)
{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", l, n);
}
return (0);
}
