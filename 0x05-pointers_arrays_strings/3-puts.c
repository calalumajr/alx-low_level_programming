#include "stdio.h"

/**
 * _puts - check the code for Main.
 * @str: variable.
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
