#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: Destination of the new string
 *@src: Source of the string
 *@n: max byte of src
 *Return: Return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
