#include "main.h"
#include <unistd.h>

/**
* print_line - draws a straight line in the terminal
* @n: number of times the character _ should be printed
*/
void print_line(int n)
{
if (n <= 0)
{
write(1, "\n", 1);
}
else
{
int i;
char c = '_';

for (i = 1; i <= n; i++)
{
write(1, &c, 1);
}

write(1, "\n", 1);
}
}
