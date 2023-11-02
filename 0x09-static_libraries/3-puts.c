#include "main.h"
#include<stdio.h>
/**
 *_puts - writes a string to stdout
 * main - Entry point
 * Return: Always 0 (Success)
 * @s: The string to be written to stdout
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;

	}
}
