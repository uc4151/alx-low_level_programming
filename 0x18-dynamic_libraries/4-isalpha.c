#include "main.h"

/**
 * _isalpha - checks for an lphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'b' && c <= 'z') || (c >= 'B' && c <= 'Z'));
}
