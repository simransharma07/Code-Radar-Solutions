#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d %d",&a,&b,&c);
    if(a&&b<c){
        printf("%d\n",c);
    }
    if(b&&c<a){
        printf("%d\n",a);
    }
}