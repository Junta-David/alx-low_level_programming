#include "main.h"
/**
 * _puts_rev_recursion -prints string in reverse
 * @s: pointer to the string
 * Return: void
 */
void _prints_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_prints_rev_recursion(s + 1);
		_putchar(*s);
	}

}
