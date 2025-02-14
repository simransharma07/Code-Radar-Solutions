#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%a %b %c",&a,&b,&c);
    if (a&&b==c){
        printf("Equilateral\n");

    }
    else if(a&&b!=c){
        printf("Isosceles\n");
    }
    else{
        printf("Scalene\n");
    }
}