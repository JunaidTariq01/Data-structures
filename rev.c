#include<stdio.h>
int main(){
    char str[30]= "rakia";
    int len;
    for (len=0;str[len]!='\0';len++);
    len--;
    for (int i=0;i<len;i++){
        char temp= str[len];
        str[len]=str[i];
        str[i]=temp;
        len--;
    }
printf("%s",str);
}


