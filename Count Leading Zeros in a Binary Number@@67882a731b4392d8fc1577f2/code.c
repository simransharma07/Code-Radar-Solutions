#include <stdio.h>

int countLeadingZeros(int num) {
    int count = 0;

    // Loop through each bit from the most significant to least significant
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break; // Stop counting once the first '1' is found
        }
        count++; // Increment the count for each leading zero
    }

    return count;
}

int main() {
    int num = 1; // You can change this to any integer
    int leadingZeros = countLeadingZeros(num);
    printf(" %d\n", num, leadingZeros);
    return 0;
}
