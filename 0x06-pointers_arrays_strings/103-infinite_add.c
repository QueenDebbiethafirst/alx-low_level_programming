#include "main.h"

/**
* infinite_add - add 2 integers.
* @n1: integer
* @n2: integer
* @r: buffer
* @size_r: size of r
* Return: char
*/

int _atoi(char *s)
{
int sign = 1, resp = 0, firstNum;

for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
{
if (s[firstNum] == '-')
{
sign *= -1;
}
}

int i;
for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
{
resp *= 10;
resp += (s[i] - 48);
}

return (sign * resp);
}

void int_to_string(int n)
{
int divisor = 1, i, resp;

for (i = 0; n / divisor > 9; i++)
{
divisor *= 10;
}

char str[i + 1];

for (int cmpt = 0; divisor >= 10; divisor /= 10, cmpt++)
{
resp = n / divisor;
str[cmpt] = '0' + resp;
n = n - resp * divisor;
}
str[i] = ('0' + n);
str[i + 1] = '\0';
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int sum, a, b;
a = _atoi(n1);
b = _atoi(n2);

sum = a + b;
int_to_string(sum);

return NULL; // Modify this line according to the logic of your program
}
