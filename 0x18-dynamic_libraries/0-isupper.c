#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isupper(int c)
{
	return _isupper(c >= 'A' && c <= 'Z');
}
