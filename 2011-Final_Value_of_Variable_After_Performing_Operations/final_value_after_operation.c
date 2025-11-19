#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int finalValueAfterOperations(char** operations, int operationsSize) {

	int res = 0;
	for (int i = 0 ; i < operationsSize ; i++) {
		//printf("Operation[i] %s\n", operations[i]);
		if (strstr(operations[i], "+") != NULL) {res += 1;}
		if (strstr(operations[i], "-") != NULL) {res -= 1;}
	}

	return res;
}

int main()
{
	int n1, n2

	printf("Enter number of operations for first array: ");
	scanf("%d", &n1);

	char **operations1 = malloc(n1 * sizeof(char *));
	for (int i = 0; i < n1; i++)
	{
		operations1[i] = malloc(4 * sizeof(char)); 
		scanf("%s", operations1[i]);
	}

// 	printf("\nEnter number of operations for second array: ");
// 	scanf("%d", &n2);

// 	char **operations2 = malloc(n2 * sizeof(char *));
// 	for (int i = 0; i < n2; i++)
// 	{
// 		operations2[i] = malloc(4 * sizeof(char));
// 		scanf("%s", operations2[i]);
// 	}
// x
	int result1 = finalValueAfterOperations(operations1, n1);
	// int result2 = finalValueAfterOperations(operations2, n2);

	printf("\nResult for first array: %d\n", result1);
	// printf("Result for second array: %d\n", result2);

	for (int i = 0; i < n1; i++)
		free(operations1[i]);
	// for (int i = 0; i < n2; i++)
	// 	free(operations2[i]);
	free(operations1);
	//free(operations2);

	return 0;
}