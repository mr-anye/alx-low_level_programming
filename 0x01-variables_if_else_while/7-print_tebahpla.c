#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Returns 0 when successful
 */
int main(void)
{
	char revers;

	for (revers = 'z'; revers >= 'a'; revers--)
	{
		putchar(revers);
	}

	putchar('\n');
	return (0);

}
