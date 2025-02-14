#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=9 '0'&& ch<= '9'){
        printf("Digit\n");
    }
    else if(ch== 'a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Vowel\n");
    }
    else if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z'))
    {
        printf("Consonent\n");
    }
    else{
        printf("Special Character\n")
    }
}