#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14, ten times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int tentimer;
	int fourteentimer;

	for (tentimer = 0; tentimer < 10; tentimer++)
	{
		for (fourteentimer = 0; fourteentimer <= 14; fourteentimer++)
		{
			if (fourteentimer >= 10)
				_putchar((fourteentimer / 10) + 48);
			_putchar((fourteentimer % 10) + 48);
		}
		_putchar(10);
	}
}
