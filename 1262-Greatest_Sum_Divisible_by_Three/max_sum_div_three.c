#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int int_array_sum(int* nums, int numsSize) {
	int res = 0;
	for (int i = 0 ; i < numsSize ; i++ ) {
		res += nums[i];
	}
	return res;
}


int maxSumDivThree(int* nums, int numsSize) {
	int res = 0;
	qsort(nums, numsSize, sizeof(int),comp);
	int numsSum, tempSum = int_array_sum(nums, numsSize);

	for (int i = 0 ; i < numsSize ; i++) {
		
		if (tempSum % 3 == 0) {
			return res;
		}
		tempSum -= nums[i];
	}

	return 0;
}


int main () {
	int nums[] = {3, 6, 5, 1, 8};
	int n      = 5;
	

	printf("Output : %d\n", maxSumDivThree(nums, n));
}
