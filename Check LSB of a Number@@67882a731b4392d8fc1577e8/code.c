#include<stdio.h>
int main()
{
    int a;
    printf("%d",&a);
    if(a&1){
        printf("Set %d",a);
    }
    else{
        printf("Not Set %d",a);
    }
}