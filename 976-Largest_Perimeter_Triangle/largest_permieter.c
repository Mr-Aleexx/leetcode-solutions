#include <stdio.h>
#include <stdbool.h>


bool check_inequality(int a, int b, int c) {
	return a + b > c && a + c > b && b + c  > a;

}

void sort(int *nums, int numSize) {

	for (int i = 1 ; i < numSize - 1 ; i++) {
		int min_ind = i;

		for (int j = i + 1 ; j < numSize ; j++) {
			if (nums[j] > nums[min_ind]) {
				min_ind = j;
			}
		}
		int temp      = nums[i];
		nums[i]       = nums[min_ind];
		nums[min_ind] = temp;
	}
}

void print_nums(int* nums, int numSize) {
	for (int i = 0 ; i < numSize - 1 ; i++) {
		printf("%d ", nums[i]);
	}
	printf("%d\n", nums[numSize]);
}

int largest_permiter(int *nums, int numSize) {
	int res;
	int max_per;
	sort(nums, numSize);
	for (int i = 0 ; i < numSize - 2 ; i++) {
		if ( check_inequality(nums[0], nums[1], nums[2]) ) {
			res = nums[0] + nums[1] + nums[2];
			if (res > max_per) {
				max_per = res;
			}
		}
	}

	return res;
}

int main () {
	int length = 3;
	int nums[] = {2,1,2};
	int output = largest_permiter(nums, length);
	//printf("nums[0] : %d\n", nums);
	//sort(nums, length);
	print_nums(nums, length);
	printf("Output %d\n", output);
	return 0;
}