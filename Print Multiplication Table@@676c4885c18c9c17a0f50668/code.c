#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;<=n;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}