#include <stdio.h>
int main()
{
    char str[100];
    int age;
    scanf("%s %d",&str,&age);
    printf("Name: %s\n",str);
    printf("Age: %d\n",age);
    char hobby[100];
    scanf("%s\n",&hobby);
    printf("Hobby: %s\n",hobby);
    return 0;


}