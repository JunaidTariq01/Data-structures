#include<stdio.h>
int main(){
    int x;
    int *ptr;
    printf("Enter any number ");
    scanf("%d",&x);
    *ptr=&x;
    printf("%u",ptr);


}