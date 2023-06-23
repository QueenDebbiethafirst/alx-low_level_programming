#include "main.h"
#include <unistd.h>

/**
* print_square - prints a square, followed by a new line
* @size: size of the square
*/
void print_square(int size)
{
if (size <= 0)
{
write(1, "\n", 1);
}
else
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
write(1, "#", 1);
}
write(1, "\n", 1);
}
}
}
