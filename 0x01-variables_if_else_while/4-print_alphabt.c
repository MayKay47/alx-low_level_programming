#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabet in lowercase,
 * except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}