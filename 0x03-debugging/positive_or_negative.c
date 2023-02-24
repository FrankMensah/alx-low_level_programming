#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - print a function random digits
 * @i: integer
 * if: to validate
 * Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{

	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	if (i < 0)
	{
	printf("%d is negative\n", i);
	}
	if (i == 0)
	{
	printf("%d is zero\n", i);
	}
}
