#include<stdio.h>
#define max_size 100
int A[max_size];
int top = -1;
void Push(int x){
    if(top== max_size -1){
        printf("Error : stack overflow \n");
        return;
    }
    A[++top]= x;
}
void Pop(){
    if(top == -1){
        printf("Error : No element to pop \n");
        return;
    }
    top--;
}
void Print(){
    int i ;
    printf("Stack : ");
    for(i=0; i<= top; i++){
        printf("%d  ",A[i]);
        
    }printf("\n");
}
int main(){
    Push(2);Print();
    Push(5);Print();
    Push(8);Print();
    Pop();Print();
    Push(9);Print();
    Push(11);Print();
}