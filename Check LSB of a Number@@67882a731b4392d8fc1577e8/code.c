#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a&1){
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
}