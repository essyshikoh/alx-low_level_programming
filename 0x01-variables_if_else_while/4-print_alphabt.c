#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low = 97;
	while (low <= 122)
	{
		if (low != 101 && low != 133)
		{
			putchar(low);
		}
		++low;
	}
	putchar(10);

	return (0);
}
