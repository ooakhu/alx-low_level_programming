#include <stdlib.h>
#include <string.h>
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
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
char alphabet2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
int i;
int lent = strlen(alphabet);
for (i = 0; i < lent; i++)
{
putchar(alphabet[i]);
}
for (i = 0; i < lent; i++)
{
putchar(alphabet2[i]);
}
return (0);
}

