#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1. On error, -1 is returned and errno is set appropriately.
*/
int _putchar(char c)
{
return write(1, &c, 1);
}

/**
* print_number - prints an integer
* @n: integer to be printed
*/
void print_number(int n)
{
unsigned int n1;

if (n < 0)
{
n1 = -n;
_putchar('-');
}
else
{
n1 = n;
}

if (n1 / 10)
{
print_number(n1 / 10);
}

char digit = (n1 % 10) + '0';
_putchar(digit);
}


