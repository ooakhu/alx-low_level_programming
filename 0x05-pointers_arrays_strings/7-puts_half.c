#include <stdio.h>

/**
 * puts_half - a function that prints half of a string
 * @str: an input string
 */

void puts_half(char *str)
{
int len = 0, v, g;

while (str[len] != '\0')
len++;

ff (len % 2 == 0)
g = len / 2;

else
g = (len + 1) / 2;

for (v = g; v < len; v++)
putchar(str[v]);

putchar('\n');
}
