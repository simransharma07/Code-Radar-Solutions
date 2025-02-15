#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } 
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    } 
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Consonant\n");  // Fixed spelling from "Consonent" to "Consonant"
    } 
    else {
        printf("Special Character\n");  // Added missing semicolon
    }

    return 0;
}
