#include<stdio.h>
int clearNthbit(int num,int n){
    return num&~(1<<n);
}
int main(){
    int num,n;
    scanf("%d %d",&num,n);
    printf("%d",clearNthbit(num,n));
    
}
    