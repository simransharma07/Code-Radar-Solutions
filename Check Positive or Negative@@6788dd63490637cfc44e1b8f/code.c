#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>0){
        printf("Positive\n");
    }
    if(num<0){
        printf("Negative\n");
    }
    if(num==0){
        printf("Zero\n");
    }
}