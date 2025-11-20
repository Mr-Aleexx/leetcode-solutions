#include <stdio.h>
#include <stdlib.h>

void pdeia(int** array, int size, int* colSize) {
	printf("[");
	for (int i = 0 ; i < size ; i++) {
		printf("["); 	 		 
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

		intervals[i] = malloc(intervalColSize[i] * sizeof(int));

		for (int j = 0 ; j < intervalColSize[i] ; j++) {
			printf("Enter the %d number of intervals[%d] array : ", j + 1, i);
			scanf("%d", &intervals[i][j]);
		}	

		
	}
	pdeia(intervals, intervalSize, intervalColSize);

	for (int i = 0 ; i < intervalSize ; i++) 
		free(intervals[i]);

	free(intervalColSize);
	free(intervals);
	return 0;
}