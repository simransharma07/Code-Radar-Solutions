#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("Equilateral");
    }

    if(a==b!=c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}