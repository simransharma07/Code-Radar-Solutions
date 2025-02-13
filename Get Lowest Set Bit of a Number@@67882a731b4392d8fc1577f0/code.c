#include<stdio.h>
#include<math.h>
int lbit(int n){
    if(n==0)
    return 0;
    return (int)(log2(n&-n))+1;

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",lbit);
}