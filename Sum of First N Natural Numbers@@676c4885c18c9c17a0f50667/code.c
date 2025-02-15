#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int sum=0;
    for(int i=1,j=N;i<=N && j>=1;i++,j--){
        sum=sum+i;//sum+=i
        printf("%d\n",j);
    }
    printf("%d\n",sum);
}