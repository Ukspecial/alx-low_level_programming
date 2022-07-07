#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabets
 *
 * main -> Entry point
 */

int print_alphabet(void);

int main(void)
{
	print_alphabet();
		return (0);
}

int print_alphabet(void)

	{
		int j; 

		for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
		_putchar('\n');
	}

