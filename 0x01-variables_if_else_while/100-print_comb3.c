#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int T;

	for (T = 0; T < 100; T++)
	{
		putchar((T / 10) + '0');
		putchar((T % 10) + '0');
		if (T !=89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
