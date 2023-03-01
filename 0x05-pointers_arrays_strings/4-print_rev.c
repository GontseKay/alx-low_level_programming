#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
<<<<<<< HEAD

=======
>>>>>>> 1375f971097b8f2d8572eaf1c9213022c55d8126
void print_rev(char *s)
{
	int longi = 0;

	int o;

	while (*s != '\0')
	{
		longi++;

		s++;
	}

	s--;

	for (o = longi; o > 0; o--)
	{
		_putchar(*s);

		s--;
	}

	_putchar('\n');
}
