#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
struct Node *head;
void Insert(int p)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = p;
    temp->link = head;
    head = temp;
    // struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    // temp1->data = 4;
    // temp1->link = NULL;
}
void print()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       
        printf("%d", temp->data);
         temp = temp->link;
    }
    
}
int main()
{  
    int i,n,x;
    head = NULL;
    printf("How many no's");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter the number\n");
        scanf("%d",&x);
        Insert(x);
        print();
    }
}