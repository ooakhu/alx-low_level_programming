#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
/* single line */
int n;
int c;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

c = n % 10;

if (c > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, c);
else if (c == 0)
printf("Last digit of %d is %d and is 0\n", n, c);
else if (c < 6 && c != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
return (0);
}

