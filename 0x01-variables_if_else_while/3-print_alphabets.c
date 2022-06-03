#include <stdio.h>
/**
* main - entry block
* @void: no argument
* Return: 0 (Success)
**/
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (d = 'A'; d <= 'Z'; c++)
		putchar(d);
	putchar('\n');
	return (0);
}
