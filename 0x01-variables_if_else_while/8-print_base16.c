#include <stdio.h>
/**
 * main - prints all numbers of base 16
 * follwed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

