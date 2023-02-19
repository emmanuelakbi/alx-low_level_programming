#include <stdio.h>

/**
 * main - Program to print alphabet, excluding p and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = 97;

	while (l < 123)
	{
		if(l != 113 && l != 101)
		{
			putchar(l);
		}
		l++;
	}
	putchar(10);
	return (0);
}
