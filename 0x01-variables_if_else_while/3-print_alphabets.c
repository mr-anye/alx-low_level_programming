#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Returns 0 when successful
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	alpha = 'A';

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
