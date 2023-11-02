#include "main.h"
/**
 * _strncpy - copies n characters from one string to another
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

	{
		dest[i] = src[i];
	}

	for (; i < n; i++)

	{
		dest[i] = '\0';
	}

	return (dest);
}
