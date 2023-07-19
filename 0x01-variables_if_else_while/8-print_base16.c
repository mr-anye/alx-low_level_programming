#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Returns 0 when successful
 */
int main(void)
{
	int numb;

	for (numb = 0x61; numb <= 0x7A; numb++)
	{
		putchar(numb);
	}

	putchar('\n');
	return (0);

}
