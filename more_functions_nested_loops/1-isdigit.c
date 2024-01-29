#include "main.h"

/**
 * _isdigit - Confirm character is a digit
 * @x: Number to confirm
 * Return: 1 for a character that is a digit 0 for all else
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}	
