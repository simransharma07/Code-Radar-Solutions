#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if((a%1==0)||(!(a%1==0)))
    {
        printf("Prime\n")
    }
    else{
        printf("Not Prime")
    }
}