#include "main.h"
#include <unistd.h>

/**
* print_triangle - prints a triangle, followed by a new line
* @size: size of the triangle
*/
void print_triangle(int size)
{
if (size <= 0)
{
write(1, "\n", 1);
}
else
{
int i, j;

for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
write(1, " ", 1);
}

for (j = 1; j <= i; j++)
{
write(1, "#", 1);
}

write(1, "\n", 1);
}
}
}
