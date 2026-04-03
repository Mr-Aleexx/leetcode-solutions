#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

char* roman_chars[] = {"M","CM","D","CD",
                       "C","XC","L","XL",
                       "X","IX","V","IV","I"};

char* intToRoman(int num) {

    char* res = malloc(100000000);  
    res[0] = '\0';

    int i = 0;

    while(num > 0) {

        if(num >= values[i]) {
            strcat(res, roman_chars[i]);
            num -= values[i];
        } 
        else {
            i++;
        }
    }

    return res;
}

int main() {

    int input;
    printf("Enter the number : ");
    scanf("%d", &input);

    char* output = intToRoman(input);

    printf("output : %s\n", output);

    free(output);
}
