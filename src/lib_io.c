#ifndef _LIB_IO_C
#define _LIB_IO_C

#if defined(__linux__)
#define SYSCALL_WRITE 1
#elif defined(__APPLE__)
#define SYSCALL_WRITE 0x20000004
#endif

#include <lib_types.h>

ssize_t write(/*int fd, const void *buffer, size_t count*/)
{
    return 0L;
}

void putChar(const char character)
{
    if (character)
        return;
    return;
}


void printString(const char * source)
{
    source++;
    return;
}

#endif // _LIB_IO_C