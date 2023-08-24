#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _islower(int c)
{
	return _islower(c >= 'a' && c <= 'z');
}
