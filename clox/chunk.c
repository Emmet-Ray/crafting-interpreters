#include <stdlib.h>

#include "chunk.h"
#include "memory.h"


void initChunk(Chunk *chunk) {
    chunk->count = chunk->capacity = 0;
    chunk->code = NULL;
}

void writeChunk(Chunk *chunk, uint8_t byte) {
    if (chunk->count >= chunk->capacity) {
        int old_capacity = chunk->capacity;
        chunk->capacity = GROW_CAPACITY(old_capacity);
        chunk->code = GROW_ARRAY(uint8_t, chunk->code, 
                    old_capacity, chunk->capacity);
    }

    chunk->code[chunk->count++] = byte;
}