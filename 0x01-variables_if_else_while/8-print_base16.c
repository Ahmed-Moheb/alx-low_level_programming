#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int num;
	int hi;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	for (hi = 97; hi <= 102; hi++)
	{
		putchar(hi);
	}
	putchar('\n');
	return (0);
}
