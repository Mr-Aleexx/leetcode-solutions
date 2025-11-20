#include <stdio.h>
#include <limits.h>

int custom_clz(int n) {
    int count = 0;
    int current_number = n;
    int last_number = 0;
    while (current_number > last_number) {
        last_number = current_number;
        current_number <<= 1;
        count++;
    }
    return count;
}

int smallestNumber(int n) {
    return ~0u >> custom_clz(n);
}

int main() {
    int n;
    //printf("Enter a number : ");
    //scanf("%d", &n);
    n = 5;
    printf("Output : %d\n", smallestNumber(n));
    printf("Custom_clz(5) : %d\n", custom_clz(n));
    return 0;
}
