#include<stdio.h>

#define CAPACITY 50000 

unsigned long hash_function(char* str) {
    unsigned long i = 0;
    for (int j = 0; str[j]; j++)
        i += str[j];
    return i % CAPACITY;
}
typedef struct Ht_item Ht_item;

// Define
struct Ht_item {
    char* key;
    char* value;
};


typedef struct HashTable HashTable;

struct HashTable {
    Ht_item** items;
    int size;
    int count;
};