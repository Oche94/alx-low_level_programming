#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - function that prints most numbers
 *
 * Return:0
 */

void print_most_numbers(void)
{
	char i;
	for (i = '0'; i <= '9'; i++)
	{
		 if (!(i == '2' || i == '4'))
			 putchar(i);
	}
	putchar('\n');
}

