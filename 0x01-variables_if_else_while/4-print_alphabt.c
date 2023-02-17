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
int lent = strlen(alphabet);
char a = 'q';
char b = 'e';
for (i = 0; i < lent; i++)
{
if ((alphabet[i] != a) && (alphabet[i] != b))
putchar(alphabet[i]);
}
return (0);
}

