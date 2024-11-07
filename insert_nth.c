//Insert a node at nth position
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Print(){
    struct Node* temp = head;
    while(temp!= NULL){
        printf("%d",temp->data);
        temp = temp -> next;
    }
    printf("\n");
}
void Insert(int data,int n){
     struct Node*temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1 ->data = data;
    temp1 ->next = NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
        return;
    }
   struct Node* temp2 = head;
   for(int i =0;i<n-2;i++){
    temp2 = temp2 ->next;
   }
    temp1 -> next = temp2 -> next;
    temp2 -> next = temp1;

}
int main(){
    head = NULL;
    
    int i,n,x,m;
    printf("How many no's ");
    scanf("%d",&m);
    printf("Enter the no's \n");
    for(i =0;i<m;i++){
    	scanf("%d",&x);
    	Insert(x,3);
    	
    }
   // Print();
     printf("Enter a position \n");
     scanf("%d",&n);
    // Delete(n);
    Print();
}