#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of
 * integers followed by a new line.
 * @v: an input array
 * @g: an input integer
 */

void print_array(int *v, int g)
{
int i = 0;

for (; i < g; i++)
{
printf("%d", v[i]);
if (i < g - 1)
printf(", ");
}
putchar('\n');
}
