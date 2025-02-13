#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0\n")
        return 0;
    }
    int pos=1;
    while((n&1)==0){
        n=n>>1;
        pos++;

    }
    printf("%d\n",pos);
    return0;
}