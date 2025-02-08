#include <stdio.h>
#include <ctype.h>  // For isalpha, isupper, and islower functions

int main() {
    char ch;
    scanf("%c", &ch);
    if (isalpha(ch)) {
        if (isupper(ch)) {
            printf("Uppercase\n");
        } else if (islower(ch)) {
            printf("Lowercase\n");
        }
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}
