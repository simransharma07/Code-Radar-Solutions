#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int bv=(a>>b)&1;
    printf("%d\n",bv);
}