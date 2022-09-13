#include "main.h"

/**
 *print_alphabet - Entry point
 *
 *Description: program that prints all the alphabets
 *followed by a new line
 *
 *Return: Exit with an int 0
 */
void print_alphabet(void)
{
	int az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');

}
