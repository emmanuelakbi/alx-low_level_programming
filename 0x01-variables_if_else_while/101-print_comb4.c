#include <stdio.h>
/**
 * main -  prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int j = 48;
	int z = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			z = j + 1;
			while (z < 58)
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (i < 55 || j < 56 || z < 57)
				{
					putchar(44);
					putchar(32);
				}
				z++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
