#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b*b){
        printf("Yes\n");
    }
    if(!(a=b*b)){
        printf("No\n");
    }


}