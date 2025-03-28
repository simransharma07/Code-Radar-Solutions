#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int uniqueRanks[200000], rankIndex = 0;
    uniqueRanks[0] = ranked[0];
    int rank = 1;
    
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            uniqueRanks[rank] = ranked[i];
            rank++;
        }
    }
    int i = rank - 1; 
    for (int j = 0; j < m; j++) {
        while (i >= 0 && player[j] >= uniqueRanks[i]) {
            i--;
        }
        result[j] = i + 2; 
    }
}

