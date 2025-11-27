#include <stdio.h>


long long maxSubarraySum(int* nums, int numsSize, int k) {
	
	long long min_prefix[k];
	for (int i = 0 ; i < numsSize ; i++) {
		min_prefix[i] = 0;
	}


	long long res;
	
    for(int i = 0 ; i < numsSize ; i++) {
		
	}
	return res;	
}


int main() {

	int nums[] = {-1,-2,-3,-4,-5};
	int n = 5;
	int k = 4;
	printf("Output : %lld", maxSubarraySum(nums, n, k));
	return 0;
}
