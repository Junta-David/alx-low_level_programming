#include "main.h"
/**
 * print_rev - print in reverse a string
 * @s:takes a string of characters
 * Return: reversed string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
