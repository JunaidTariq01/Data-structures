#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head;
void Insert(int x){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = x;
	temp -> next = head;
	head = temp;
}
void Print(){
	
    struct Node* temp=head;
    while(temp!=NULL)
    {
    	
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void Reverse(){
    struct Node *temp = (struct Node *)malloc(sizeof (struct Node));
    struct Node *curr,*next,*prev;
    curr= head;
    prev = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

}
int main(){
    head = NULL;
    
    int i,x,m;
    printf("How many no's ");
    scanf("%d",&m);
    printf("Enter the no's \n");
    for(i =0;i<m;i++){
    	scanf("%d",&x);
    	Insert(x);
    	
    }
    Print();
    Reverse();
    Print();
}
