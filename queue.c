#include<stdio.h>
int front = -1,rear = -1;
int a[10];
int Enqueue (int);
void Print(){
    int i;
    for(i=1;i<=10;i++)
printf("Elements in the queue are %d",a[i]);
}
int main(){
int q;
printf("Enter the size");
scanf("%d",&q);
for(int i =1; i<=q; i++){
    printf("ist ele");
    Enqueue(2);
    Enqueue(3);
    Print();
}
    for(int i =0 ;i<=a[q];i++){
        printf("Elements are %d \n",a[rear]);
    }
}

int isEmpty()
{
    if (front == -1 && rear == -1)
    return 1;
    else 
    return 0;
}
int isFull(){
    if (rear == sizeof(a)-1)
    printf("Queue is Full");
    
}
int Enqueue(int x){
    if(isFull())
    return 0;
    else if (isEmpty()){
        front = rear = 0;
        a[rear] = x;
    }
    else{
        rear = rear +1;
        a[rear] = x;
    }
}
int Dequeue(){
    if(isEmpty())
    return 0;
    else if (front == rear)
    front = rear = -1;
    else
    front = front + 1;
}
