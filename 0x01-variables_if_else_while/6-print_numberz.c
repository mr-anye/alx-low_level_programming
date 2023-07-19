#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Returns 0 when successful
 */
int main(void)
{
	int numb = 0;

	while (numb <= 9)
	{
		putchar(numb);
		numb++;
	}

	putchar('\n');
	return (0);

}
