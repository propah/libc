#ifndef _LIB_IO_H
#define _LIB_IO_H
#include <lib_types.h>

extern int return_one(void);
ssize_t write(/*int fd, const void *buffer, size_t count*/);
void putChar(const char character);
void printString(const char * source);

#endif // _LIB_IO_H