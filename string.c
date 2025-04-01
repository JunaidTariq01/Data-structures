
#include<stdio.h>
int main(){
    char str[100];
    int len;
    printf("enter the string");
    for(int i =0;i<7;i++){
        scanf("%c",&str[i]);
    };

    char str1[100];
    for (int i=0;str[i]!='\0';i++){
        str1[i]=str[i];
    };

    printf("str:-%s",str);
    printf("str1:- %s",str1);

 for ( len=0;str[len]!='\0';len++);
        printf("length:-%d",len-1);
}



