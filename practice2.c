#include<stdio.h>
#include<stdlib.h>

struct Node{
    int main;
    struct node *root;
};

struct Node *head;
int Insert(int x){
    struct Node *temp = (struct Node*) (malloc (sizeof(struct Node)));
    struct Node *temp2 = (struct Node*) (malloc (sizeof(struct Node)));
    // while(temp != NULL){
    //     // printf("%d ", temp->main);
    //     temp = temp->root;

    // }
    temp->main = x;
    temp->root= temp2;
    temp2 = temp;
}
void Print(){
    struct Node *temp; //= head;
    // while(temp != NULL){
        printf("%d ", temp->main);
        temp = temp->root;

    }

 int main(){
    head = NULL;
    
 int i,n,m;
 printf("How many elements ");
 scanf("%d",&n);

 printf("Enter the elements ");
 for(i=0;i<=n;i++){
    scanf("%d",&m);
    Insert(m);
    
    Print();

}






}