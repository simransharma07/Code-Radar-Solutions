#include<stdio.h>
int main()
{
    int a;
    printf("%d",&a);
    if(a&1){
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
}