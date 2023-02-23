#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that prints only digits
 *
 * @c: parameter to be printed
 *
 * Return: 1 if it is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
