#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("The number of values must be at least 2.\n");
        return 1;
    }

    float numbers[n];

    printf("Enter %d real values: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
    }

   float largest = numbers[0], second_largest = numbers[1];

    if (second_largest > largest) {
        float temp = largest;
        largest = second_largest;
        second_largest = temp;
    }

    for (int i = 2; i < n; i++) {
        if (numbers[i] > largest) {
            second_largest = largest;
            largest = numbers[i];
        } else if (numbers[i] > second_largest) {
            second_largest = numbers[i];
        }
    }

    printf("The two largest values are: %.2f and %.2f\n", largest, second_largest);

    return 0;
}