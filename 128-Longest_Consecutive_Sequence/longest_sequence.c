#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef i8 b8;
typedef i32 b32;

#define MAX(a, b) (a > b ? a : b)
#define TABLE_SIZE 100000

typedef struct entry {
    u32 key;
    u32 value;
    struct entry* next;
} entry;

typedef struct HashTable {
    entry** entries;
} HashTable;

HashTable* create_ht() {
    HashTable* ht = malloc(sizeof(HashTable) * 1);
    ht->entries   = malloc(sizeof(entry*) * TABLE_SIZE);
    
    for (int i= 0 ; i < TABLE_SIZE ; i++) {
        ht->entries[i] = NULL;
    }
    return ht;
}

u32 hash(const char* key) {
    u64 value = 0;
    u32 key_len = strlen(key);
    
    for (u32 i = 0 ; i < key_len ; ++i) {
        value = value *  37 + key[i];
    }

    value %= TABLE_SIZE;

    return value;
}

int in_array(int* array, int n, int number) {
    for (int i = 0 ; i < n ; i++) {
        if (array[i] == number) {
            return 1;
        }
    }
    return 0;
}

int longest_consecutive(int* nums, int numsSize) {

    int length  = 0;
    int longest = 0;
    
    for(int i = 0 ; i < numsSize ; i++) {
        length = 0;
        if (in_array(nums, numsSize, nums[i] - 1) !=  1) {
            while (in_array(nums, numsSize, nums[i] + length) == 1) {
                length += 1;
            }

            longest  = MAX(length, longest);
        }
    }
    

    return longest;
}

int main () {

    int array[] = {100,4,200,1,3,2}; 
    int n = 6;
    int array2[] = {1,4, 3, 4, 5, 2, 4, 3, 5, 3};
    int n2 = sizeof(array2) / sizeof(array2[0]);


    printf("Output : %d\n",longest_consecutive(array, n));
    printf("Output : %d\n",longest_consecutive(array2, n2));

    printf("------- Hash Test -------\n");

    const char* key = "i am the best of the world";
    printf("hash result %d\n", hash(key) );

    return 0;
}
