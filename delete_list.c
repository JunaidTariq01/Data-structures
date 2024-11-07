//delete a node at nth position
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
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
void Delete(int n){
    struct Node* temp1 = head;
    if(n==1){
        head = temp1-> next;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<n-2;i++){
        temp1= temp1->next;
    }
    struct Node* temp2= temp1 -> next;
    temp1 -> next = temp2 -> next;
    free(temp2);
}
int main(){
    head = NULL;
      int i,n,x,m;
    printf("How many no's ");
    scanf("%d",&m);
    printf("Enter the no's \n");
    for(i =0;i<m;i++){
    	scanf("%d",&x);
    	Insert(x);
    	
    }
    Print();
    printf("Enter a position \n");
    scanf("%d",&n);
    Delete(n);
    Print();
}