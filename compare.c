#include<stdio.h>
int main(){
    char str[]= "faisaL";
    char str1[]= "fassai";
int i,result;
    while(str[i]!='\0'&&str1[i]!='\0'){
        if(str[i]!=str1[i]){
            result=str[i]-str1[i];
            break;
        }
        i++;
    }
    printf("\n%d at pos %d",result,i+1);
}