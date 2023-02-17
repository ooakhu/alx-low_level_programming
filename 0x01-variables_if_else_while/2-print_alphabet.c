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
int i;

for (i = 0; i < strlen(alphabet); i++)
{
putchar(alphabet[i]);
}
return (0);
}
