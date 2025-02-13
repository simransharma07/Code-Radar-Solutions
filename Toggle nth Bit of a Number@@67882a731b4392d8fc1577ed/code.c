#include<stdio.h>
int togb(int num,int n){
    return num^(1<<n);
}
int main()
{
    int num,n;
    scanf("%d %d",&a,&b);
    printf("%d\n",togb(num,n));
}