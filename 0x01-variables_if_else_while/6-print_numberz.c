#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Returns 0 when successful
 */
int main(void)
{
	int numb = 0;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar(numb + 48);
	}

	putchar('\n');
	return (0);

}
