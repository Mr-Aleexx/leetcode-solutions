#include <stdio.h>
#include <stdlib.h>

void print_nums(int *nums, int numSize)
{
	for (int i = 0; i < numSize - 1; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("%d\n", nums[numSize - 1]);
}

int triangularSum(int *nums, int numsSize) {

	//int *newNums = (int*)malloc(numsSize - 1);

	print_nums(nums, numsSize);
	for (int i = numsSize ; i > 1 ; i--) {
		for (int j = 0 ; j < i - 1  ; j++) {
			printf("%d\n", j);
			nums[j] = (nums[j] + nums[j + 1]) % 10;
		}
		print_nums(nums, numsSize);
	}
	return nums[0];
}



int main () {
	int numSize = 5;
	int nums[]  = {1,2,3,4,5};
	int length = sizeof(nums) / sizeof(nums[0]);

	//printf("%d\n", length);
	int output = triangularSum(nums, numSize);
	printf("Output : %d\n", output);
}