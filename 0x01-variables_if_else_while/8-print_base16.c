#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Returns 0 when successful
 */
int main(void)
{
	int numb;

	for (numb = 0x0; numb <= 0xf; numb++)
	{
		putchar(numb);
	}

	putchar('\n');
	return (0);

}
