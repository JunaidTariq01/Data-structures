#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
};
void LinkedListTransversal(struct Node*ptr){
    while(ptr!=NULL){
        printf("Elements : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
//case1
struct Node *insertAtfirst(struct Node *head,int data){
    struct Node *ptr = (struct Node*)malloc (sizeof(struct Node));
    ptr->data=data;
    ptr-> next=head;
    return ptr; 
}
//case 2
struct Node *insertAtEnd(struct Node *head, int data) {
struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
ptr->data=data;
struct Node *p= head;

while(p->next!=NULL){
p=p->next;
}
p->next=ptr;
ptr->next=NULL;
return head;
};

//case 3:
struct Node *insertAtIndex(struct Node *head, int data, int index){
     struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));
struct Node *p= head;
int i=1;
while(i!=index-1){
p=p->next;
i++;
}
return head;

}
int main (){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    
    head=(struct Node*)(malloc(sizeof(struct Node)));
    second=(struct Node*)(malloc(sizeof(struct Node)));
    third=(struct Node*)(malloc(sizeof(struct Node)));
    head->data=7;
    head->next = second;

    second->data =5;
    second-> next=third;

    third->data =7;
    third->next=NULL;
    printf("Linked List before insertion\n");
    LinkedListTransversal (head);
    head = insertAtEnd (head, 9);
    printf("Linked List after insertion\n");
    LinkedListTransversal (head);

    return 0;
}