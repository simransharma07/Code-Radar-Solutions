#include <stdio.h>

int main() {
    int cost, sell;
    scanf("%d %d", &cost, &sell);

    if (sell > cost)
        printf("Profit\n");
    else if (sell < cost)
        printf("Loss\n");
    else
        printf("No Profit No Loss\n");

    return 0;
}
