#include <stdio.h>

int numWaterBottles(int numBottles, int numExchange) {
    return numBottles + (numBottles) / (numExchange - 1);
}

int main () {
    int numBottles, numExchange;
    printf("Enter numBottles : ");
    scanf("%d", &numBottles);
    //printf("%d\n", numBottles);
    printf("Enter numExgange : ");
    scanf("%d", &numExchange);
    int output = numWaterBottles(numBottles, numExchange);
    printf("Output : %d\n", output);
    return 0;
}