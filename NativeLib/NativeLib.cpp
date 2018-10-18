#include "NativeLib.h"
#include <stdio.h>

const char* Print_line(const char* str) {
	str = "lll";
	printf("%s\n", str);
	return str;
}