#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of integers (n): ");
    scanf("%d", &n);

   if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    int numbers[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int is_ascending = 1;
    int is_descending = 1;

    for (int i = 1; i < n; i++) {
        if (numbers[i] <= numbers[i - 1]) {
            is_ascending = 0;
        }
        if (numbers[i] >= numbers[i - 1]) {
            is_descending = 0;
        }
    }

    if (is_ascending) {
        printf("ascending sequence\n");
    } else if (is_descending) {
        printf("descending sequence\n");
    } else {
        printf("neither ascending nor descending sequence\n");
    }

    return 0;
}
