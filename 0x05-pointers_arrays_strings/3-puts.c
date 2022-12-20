#include "stdio.h"
#include <string.h>

/**
 * _puts - check the code for Main.
 * @str: variable.
 */
void _puts(char *)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
