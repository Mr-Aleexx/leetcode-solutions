#include <stdio.h>
#include <stdlib.h>

void pdeia(int** array, int size, int* colSize) {
	if(!array) return;
	printf("[");
	for (int i = 0 ; i < size ; i++) {
		printf("["); 
		if (!colSize[i]) return;
		for(int j = 0 ; j < colSize[i] ; j++) {
			printf("%d", array[i][j]);
			if (j < colSize[i] - 1) 
				printf(", ");
		}
		if (i < size - 1)
			printf("],");
	}
	printf("]]\n");
}

int intersectionSizeTwo(int **intervals, int intervalsSize, int *intervalsColSize) {

}

int main() {
	// interval is the array
	int intervalSize;
	int* intervalColSize;
	printf("Enter the interval size : ");
	scanf("%d", &intervalSize);


	int** intervals       = malloc(intervalSize * sizeof(int*));
	intervalColSize       = malloc(intervalSize * sizeof(int));
	for (int i = 0 ; i < intervalSize ; i++) {

		printf("Enter the %d interval column size : ", i + 1); 
		scanf("%d", &intervalColSize[i]);		
		if (intervalColSize[i] < 1) {
			printf("Error : The subarray must have a length of at least 1");
			break;
		}
		

		intervals[i] = malloc(intervalColSize[i] * sizeof(int));

		for (int j = 0 ; j < intervalColSize[i] ; j++) {
			printf("Enter the %d number of intervals[%d] array : ", j + 1, i);
			scanf("%d", &intervals[i][j]);
		}	

		
	}
	pdeia(intervals, intervalSize, intervalColSize);

	for (int i = 0 ; i < intervalSize ; i++) 
		free(intervals[i]);
	printf("Freed intervals[i]");

	free(intervalColSize);
	printf("Freed intervalColSize");
	free(intervals);
	printf("Freed intervals");
	return 0;
}