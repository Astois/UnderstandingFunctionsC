#include <stdio.h>

int main() {
    unsigned long long fact = 1;
    int num = 10;
    if (num < 0) {
        printf("incorrect input cannot be less than 0");
    }
    else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %llu", num, fact);
    }
    return 0;
}
