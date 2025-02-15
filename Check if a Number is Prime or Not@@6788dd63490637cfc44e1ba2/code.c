#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    // Handling special cases
    if (a <= 1) {
        printf("Not Prime\n");
    }
    else if (a == 2 || a == 3 || a == 5 || a == 7) {
        printf("Prime\n"); // Directly marking small prime numbers
    }
    else if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0) {
        printf("Not Prime\n"); // If divisible by 2, 3, 5, or 7 (except themselves)
    }
    else {
        printf("Prime\n"); // If not divisible by the above numbers, assume prime
    }

    return 0;
}
