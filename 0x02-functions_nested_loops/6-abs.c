#include "main.h"

/**
 * _abs - To find the absolute value of a number.
 *@i: input number as an integer.
 * Return: Always 0 (Success).
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
