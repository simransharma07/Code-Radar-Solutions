#include<stdio.h>
int togb(int num,int n){
    return num ^(1<<n);
}
int main()
{
    int num,n;
    scanf("%d %d",&num,&n);
    printf("%d\n",togb(num,n));
}