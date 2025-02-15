#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int sum=0;
    for(int j=N;j>=1;j++){
        sum=sum+j;//sum+=i
        printf("%d\n",j);

    }
    printf("%d\n",sum);
}