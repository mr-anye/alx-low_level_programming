#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Returns 0 when successful
 */
int main(void)
{
	int numb;
	char letter;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar(numb + 48);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);

}
