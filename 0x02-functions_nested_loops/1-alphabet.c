#include "main.h"

/**
<<<<<<< HEAD
*print_alphabet - prints the alphabet, in lowercase, followed by a new line
*/
void print_alphabet(void)
{
	char ch;
	ch = 'a';

	while (ch  <= 'z')
	{
	        _putchar(ch);
        	ch++;

	}
	_putchar('\n');
=======
*print_alphabet - prints the alphabet, in lowercase, followed by a new line  
*/
void print_alphabet(void)
{
char ch;
ch = 'a';
while (ch  <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');	
>>>>>>> c29736b9417c2f6ee24cf0f32596bdba54962b1d
}

