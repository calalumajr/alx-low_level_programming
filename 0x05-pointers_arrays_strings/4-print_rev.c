#include "stdio.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: variable.
 */
void print_rev(putchar *s)
{
int i;
int a;
for (i = 0; s[i] != '\0'; i++)
{
continue;
}
i--;
for (a = 0; a <= i; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
