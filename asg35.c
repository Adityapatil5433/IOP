//C PROGRAM TO READ NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    while (N != 0) {
        sum += N % 10;
        N /= 10;
    }

    // If sum is more than 9, repeat the process until sum becomes a single digit
    while (sum > 9) {
        int temp = 0;
        while (sum != 0) {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
