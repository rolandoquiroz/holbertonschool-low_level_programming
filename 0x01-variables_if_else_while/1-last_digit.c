#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int last_digit;
if (n % 10 < 0)
last_digit = -n % 10;
else
last_digit = n % 10;

if (last_digit == 0)
{
last_digit = 0;
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
if ((last_digit < 6) && (last_digit != 0))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
return (0);
}