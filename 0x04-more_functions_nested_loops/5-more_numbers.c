#include "main.h"
#include <unistd.h>

/**
* more_numbers - print more numbers
*/
void more_numbers(void)
{
int i, j;
char c;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
c = '1';
else
c = j % 10 + '0';
write(1, &c, 1);
}
c = '\n';
write(1, &c, 1);
}
}

