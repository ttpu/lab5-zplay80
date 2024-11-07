#include <stdio.h>

int main() {
    int x, y, M, m, r;

    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);

    if (x <= 0 || y <= 0) {
        printf("Both numbers should be positive.\n");
        return 1;
    }

    if (x > y) {
        M = x;
        m = y;
    } else {
        M = y;
        m = x;
    }

    while (m != 0) {
        r = M % m;
        if (r == 0) {
            printf("The GCD of %d and %d is %d\n", x, y, m);
            return 0;
        }
        M = m;
        m = r;
    }

    printf("The GCD of %d and %d is %d\n", x, y, M);
    return 0;
}
