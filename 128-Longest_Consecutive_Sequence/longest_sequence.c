#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)

//TODO : implement hashsets since it's too slow
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

    return 0;
}
