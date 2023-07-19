#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Returns 0 when successful
 */
int main(void)
{
	char numb;

	for (numb = '0'; numb <= 'f'; numb++)
	{
		putchar(numb);
	}

	putchar('\n');
	return (0);

}
