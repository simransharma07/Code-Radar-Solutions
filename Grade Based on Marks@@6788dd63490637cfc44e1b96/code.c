#include<stdio.h>
int main()
{
    int var;
    scanf("%d",&var);
    if(var>=90){
        printf("A\n");
    }
    else if(var>=80 && var<90){
        printf("B\n");

    }
    else if(var>=70 && var<80){
        printf("C\n");
    }
    else if(var>=60 && var <70){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
}