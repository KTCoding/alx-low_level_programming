#include <stdio.h>

/**
 *main - print lowercase and uppercase a-zA-Z
 *Return: Always 0 (success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z');
	{
	putchar(lower);
	lower++;
	}

	while (upper <= 'Z');
	{
	putchar(upper);
	upper++;
	}

	putchar('\n');

	return (0);
}	
