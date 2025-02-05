//Linked list Inserting a node 
#include<stdlib.h>
#include<stdio.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert (int x){
    struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next =head;
    head=temp;
}
void print(){
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    int i,n,x;
    head=NULL;
    printf("How many no's");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter the number\n");
        scanf("%d",&x);
        Insert(x);
        print();
    }
}


