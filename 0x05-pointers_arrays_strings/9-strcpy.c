/**
 * strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @src: A pointer to source string to copy from
 * @dest: A pointer to destination of string
 *
 * Return: pointer to destination
 */


char strcpy(char *dest, char *src)
{

char *hold = dest;

while (*src)
*dest++ = *src++;
return (hold);

}

