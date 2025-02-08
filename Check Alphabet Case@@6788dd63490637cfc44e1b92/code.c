#include <stdio.h>
int main()
{
    char ch[100];
    scanf("%c",&ch);
    if(ch>100){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}