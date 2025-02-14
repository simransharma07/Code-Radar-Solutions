#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c>a&&b){
        printf("%d\n",c);
    }
    else if(a>b&&c){
        printf("%d\n",a);
    }
    
}