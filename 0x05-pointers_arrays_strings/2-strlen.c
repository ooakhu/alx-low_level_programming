/**
 * _strlen -  a function that returns the length of a str
 * @s: an input string
 */

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
