#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=9 '0'&& ch<= '9'){
        printf("Digit\n");
    }
    else if(ch== 'a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel\n");
    }
    else if((ch>='a'&&ch<='z'))
    {
        printf("Consonent\n");
    }
    else{
        printf("Special Character\n")
    }
}