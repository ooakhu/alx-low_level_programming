#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int m;
long int n;
long long int b;
char c;
float v;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(v));
return (0);
}
