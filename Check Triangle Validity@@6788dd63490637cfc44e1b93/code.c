#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,%b,&c);
    if(a%60==0 && b%60==0 && c%60==0){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}