#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_prime_number(1);
	print("%d\n", r);
	r = is_prime_number(1024);
	print("%d\n", r);
	r = is_prime_number(16);
	print("%d\n", r);
	r = is_prime_number(17);
	print("%d\n", r);
	r = is_prime_number(25);
	print("%d\n", r);
	r = is_prime_number(-1);
	print("%d\n", r);
	r = is_prime_number(113);
	print("%d\n", r);
	r = is_prime_number(7919);
	print("%d\n", r);
	return (0);
}
