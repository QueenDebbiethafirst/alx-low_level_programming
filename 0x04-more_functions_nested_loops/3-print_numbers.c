#include <unistd.h>

/**
 * print_numbers - Prints the numbers from 0 to 9.
 *
 * Return: void
 */
void print_numbers(void)
{
	char numbers[] = "0123456789";
	size_t size = sizeof(numbers) - 1;

	write(STDOUT_FILENO, numbers, size);
	write(STDOUT_FILENO, "\n", 1);
}
