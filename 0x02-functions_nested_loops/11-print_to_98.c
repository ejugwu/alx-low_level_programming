#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from input to 98
 * @num : The number to begin counting at.
 */
void print_to_98(int n)
{
	if (num >= 98)
	{
	while (num > 98)
		printf("%d, ", num--);
	printf("%d\n", num);
	}
	else
	{
		while (num < 98)
			printf("%d, ", num++);
		printf("%d\n", num);
	}
}
