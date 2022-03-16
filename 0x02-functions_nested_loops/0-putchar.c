#include "main.h"

/**
 * main -Prints _putchar followed by a new line
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar(10);

	return (0);
}
