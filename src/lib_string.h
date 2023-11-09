#ifndef _LIB_STRING_H
#define _LIB_STRING_H

#include <lib_types.h>

char *stringCopy(char * restrict destination, const char * restrict source, size_t length);
size_t stringLength(const char *string);

#endif // _LIB_STRING_H