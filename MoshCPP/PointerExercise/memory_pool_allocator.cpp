/* 
Exercise 10: Industrial-Level Application
1. Implement a memory pool allocator:
2. Create a class MemoryPool that preallocates a block of memory for objects.
3. Implement methods to:
- Allocate memory for a new object (allocate()).
- Free memory (deallocate()).
- Use the pool allocator to manage memory for a large number of objects efficiently.

Example Features:
1. Allocate a large block of memory upfront.
2. Reuse deallocated slots in the pool.
3. Provide performance benchmarks against new and delete. 
*/
#include <iostream>

using namespace std;

class MemoryPool {
private:
    struct Block{
        Block* next;  
    };

    char* pool;     // raw memory block
    int blockSize;  // size of each object
    int capacity;   // number of objects in the pool
    Block* freeBlockList; // head of linked list 

    void initialiseFreeBlockList(){
        // Take the pool start as the freelist start
        // force cast the address into Block pointer
        this->freeBlockList = reinterpret_cast<Block*>(pool);
        for (int i = 0; i < capacity; i++) {
            freeBlockList[i].next = &freeBlockList[i + 1];
            freeBlockList[capacity - 1].next = nullptr;
        }
    }

public:
    MemoryPool(size_t blockSize, size_t capacity);
    MemoryPool();
    ~MemoryPool();

    void* allocate();
    void deallocate(void* ptr);
};
    

MemoryPool::MemoryPool(size_t blockSize, size_t capacity)
{
    this->blockSize = blockSize;
    this->capacity = capacity;
    pool = new char[blockSize * capacity];
    this->initialiseFreeBlockList();
    cout << "Memory Pool Initialized with " << capacity << " blocks of size " << blockSize << " bytes.\n";
}

MemoryPool::MemoryPool() : pool(nullptr), blockSize(0), capacity(0), freeBlockList(nullptr){
    pool = nullptr;
    cout << "Default Constructor Called Explicitely!\n";
}

MemoryPool::~MemoryPool()
{
    delete[] pool;
    pool = nullptr;
    cout << "Pool died.\n";
}

void* MemoryPool::allocate(){
    if(!freeBlockList){
        throw bad_alloc();
    }
    Block* block = freeBlockList;
    freeBlockList = freeBlockList->next;
    return block;
}

void MemoryPool::deallocate(void* ptr){
    Block* block = reinterpret_cast<Block*>(ptr);
    block->next = freeBlockList;
    freeBlockList = block;
}

int main(){
    MemoryPool pool(sizeof(int), 10);

    void* ptr1 = pool.allocate();
    void* ptr2 = pool.allocate();

    pool.deallocate(ptr1);
    pool.deallocate(ptr2);

    void* ptr3 = pool.allocate();

    cout << "Memory pool tested successfully!" << endl;

    return 0;
}

