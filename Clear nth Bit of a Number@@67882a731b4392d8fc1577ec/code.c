#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int nbit=(a>>b)&0;

    printf("%d",nbit);
}