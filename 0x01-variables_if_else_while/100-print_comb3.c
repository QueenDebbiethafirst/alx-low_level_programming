#include <stdio.h>

/**
 * main - program entry point.
 * Return: 0 for success, non-zero for failure.
 */
int main(void)
{
	int i, k = '0', j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = k; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i == j)
				continue;
			if (i == '8' && j == '9')
				break;
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}

	putchar('\n');
	return (0);
}
