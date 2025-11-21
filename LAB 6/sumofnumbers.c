#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, number, average;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &number);
        sum = sum + number; // adding numbers to sum
    }

    average = sum / n; // calculating average

    printf("Average = %.2f\n", average);

    return 0;
}

    
