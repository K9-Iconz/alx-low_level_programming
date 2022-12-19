#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 *
 * Return: void which means our answer is correct
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while
		(s[i] != '\0')
		{
		i++;
		}
	for
		(i = i - i;
		 i >= 0 i--)
		{
			_putchar (s[i]);
		}
	_putchar ('\n');
}
