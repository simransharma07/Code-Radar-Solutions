#include <stdio.h>

int count_leading_zeroes(int n) {
    // Assuming 32-bit integer size
    if (n == 0) {
        return 32;  // Special case: If the number is 0, all 32 bits are zero
    }

    int count = 0;
    // Loop through all bits from the most significant bit to the least significant
    for (int i = 31; i >= 0; i--) {
        if ((n & (1 << i)) != 0) {
            break;  // Stop as soon as we find the first 1
        }
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    printf(" %d\n", count_leading_zeroes(num));
    return 0;
}
