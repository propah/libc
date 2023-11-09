#ifndef _LIB_MEMORY_C
#define _LIB_MEMORY_C

#define HEAP_SIZE 64000UL
#define FREE_BLOCKS_SIZE 8000UL

#include <lib_memory.h>

static char heap[HEAP_SIZE];
static FreeBlock *firstFreeBlock = NULL;
static bool isHeapInitialized = false;

typedef struct FreeBlock {
    size_t size;
    void *address;
    FreeBlock *nextFreeBlock;
    FreeBlock *previousFreeBlock;
} FreeBlock;

static void initializeHeap()
{
    FreeBlock *first = (FreeBlock*)freeBlocks;
    first->size = HEAP_SIZE - sizeof(FreeBlock);
    first->address = NULL;


    isHeapInitialized = true;
}

void *memoryAllocation(size_t size)
{

}



#endif // _LIB_MEMORY_C