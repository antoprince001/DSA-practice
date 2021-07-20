#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void push(struct Node** head,int datum ){
    
        struct Node* newnode = (struct Node *)malloc(sizeof(struct Node));
        struct Node* temp;
        newnode->data = datum;
        newnode->next = NULL;
        
        if(*head == NULL)
            *head = newnode;
        else{
            temp = *head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next=newnode;
        }
        
    
}
int main()
{
    struct Node* head=NULL;
    struct Node* temp=NULL;
    push(&head,5);
    push(&head,6);
    push(&head,7);
    temp=head;
    while(temp != NULL){
        
        printf("%d ",temp->data);
        temp = temp->next;
    }

    return 0;
}
