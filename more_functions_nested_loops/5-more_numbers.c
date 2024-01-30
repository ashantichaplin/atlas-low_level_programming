#include "main.h"

/**
 * more number - function that prints 10 times the numbers 0 to 14
 * Return: 10 times of the numbers 0 up 14
*/

void more_number(void)

{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
