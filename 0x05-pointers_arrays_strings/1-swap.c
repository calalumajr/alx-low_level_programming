#include <stdio.h>
/**
* swap_int - check the code for Main.
* @a: variable.
* @b: variable.
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
