#include <stdio.h>

int search_number(int* nums, int numsSize, int n) {
	for (int i = 0 ; i < numsSize ; i++) {
		if (nums[i] == n) return nums[i];
	}
	return -1;
}


int findFinalValue(int *nums, int numsSize, int original) { 
	int res = original;
	printf("res = %d\n", res);
	while (search_number(nums, numsSize, res) != -1) {
		res *= 2;
		// printf("res = %d\n", res);
	}
	return res;
}

// printf("i = %d\n", i);

int main() {
	int nums[] = {5, 3, 6, 1, 12};
	int numsSize = 5;
	int original = 3;

	printf("Output : %d\n", findFinalValue(nums, numsSize, original));
	return 0;
}