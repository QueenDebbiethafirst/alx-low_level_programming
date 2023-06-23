#include "main.h"
#include <unistd.h>

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character '\' should be printed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
write(1, "\n", 1);
}
else
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
write(1, "\\", 1);
else if (j < i)
write(1, " ", 1);
}
write(1, "\n", 1);
}
}
}
