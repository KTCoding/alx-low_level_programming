#include <stdio.h>

/**
 *main - print uppercase A-Z
 *Return: Always 0 (success)
 */

int main(void)
{
	char alpha = 'A';

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
