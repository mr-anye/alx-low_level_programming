#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Returns 0 when successful
 */
int main(void)
{
	int numb;

	for (numb = 48; numb <= 57; numb++)
	{
		putchar(numb);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);

}
