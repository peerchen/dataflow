#ifndef DATASTORE_H
#define DATASTORE_H

#include <string>
#include <unordered_map>
#include "ManagedMemoryChunk.h"

class Datastore
{
public:
    bool isComputed(int dataId);
    void * operator [](int dataId);

    void * createEntry(int chunkId, std::size_t sizeInBytes);
    void removeEntry(int dataId);

    void reset();
private:
    std::unordered_map<int, ManagedMemoryChunk> computedResults;
};

#endif
