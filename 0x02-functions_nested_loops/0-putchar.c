#include "main.h"

/**
 * main -Prints _putchar followed by a new line
 *
 * Return: 0 on success. Error code otherwise
 */
int _putchar(void);
int main(void)

{
	char *sh = "_putchar";


	while (*sh)
	{
		_putchar(*sh);
		i++;
	}

	_putchar('\n);

	return (0);
}
