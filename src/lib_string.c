#ifndef _LIB_STRING_C
#define _LIB_STRING_C


#include <lib_string.h>


char *stringCopy(char * restrict destination, const char * restrict source, size_t length)
{
    if (destination == NULL)
        return NULL;

    if (destination == source)
        return destination;

    if (source == NULL)
        return destination;

    size_t i = 0UL;

    while (*source != '\0' && i++ < length)
    {
        *destination++ = *source++;
    }

    while (i++ < length)
    {
        *destination++ = '\0';
    }

    return destination;
}

size_t stringLength(const char *string)
{
    if (string == NULL)
        return 0;

    ssize_t length = 0L;
    while(*string++ != '\0')
    {
        ++length;
    }

    return length;
}

#endif // _LIB_STRING_C