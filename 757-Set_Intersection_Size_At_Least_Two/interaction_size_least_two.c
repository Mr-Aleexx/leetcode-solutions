#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KRED  "\x1B[31m"
#define RESET "\x1B[0m"


void error_message() {
	printf(KRED "Error : " RESET);
}

void trim(char *s) {

    int i = 0, j = 0;

    while (s[i] == ' ') i++; 

    while (s[j++] = s[i++]);
}


int check_int_string(char* s) {

	char* temp = s;
	trim(temp);

	if (!atoi(temp)) {
		error_message();
		printf("Failed converting string to int");
		return -1;
	}
	return 1;
}

void input_number_into_array(int* array, char* s) {

}

int check_valid_malloc(int* array, int size) {

	for (int i = 0 ; i < size ; i++) {

		if (!array[i]) {
			error_message();
			printf("Could not print array[%d], try checking if your correctly assigned it\n"  ,i);
			return -1;
		}
	}
	return 1;
}


void pdeia(int** array, int size, int* colSize) {

	if(!array) return;
	if (check_valid_malloc(colSize, size) != 1) return;

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
	if (intervalSize < 1) {
		error_message();
		printf("The array must have a size of at least 1\n");
		exit(EXIT_FAILURE);
	}


	int** intervals       = malloc(intervalSize * sizeof(int*));
	intervalColSize       = malloc(intervalSize * sizeof(int));
	for (int i = 0 ; i < intervalSize ; i++) {

		printf("Enter the %d interval column size : ", i + 1); 
		scanf("%d", &intervalColSize[i]);		
		if (intervalColSize[i] < 1) {
			error_message();
			printf("The subarray must have a length of at least 1\n");
			break;
		}
		

		intervals[i] = malloc(intervalColSize[i] * sizeof(int));

		char* sub_array_input;
		printf("Enter the number of interval[%d], separate number with spaces", i);
		scanf("%s", sub_array_input);
		if (check_int_string(sub_array_input) != 1) break;
		

		for (int j = 0 ; j < intervalColSize[i] ; j++) {
			printf("Enter the %d number of intervals[%d] array : ", j + 1, i);
		}	

		
	}
	pdeia(intervals, intervalSize, intervalColSize);

	for (int i = 0 ; i < intervalSize ; i++) {
		free(intervals[i]);
		printf("Freed intervals[%d]\n", i);
	}
	

	free(intervalColSize);
	printf("Freed intervalColSize\n");
	free(intervals);
	printf("Freed intervals\n");
	return 0;
}
