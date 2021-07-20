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
struct Node* reverse(struct Node* head){
    
    struct Node* curr=head;
    struct Node* previous = NULL;
    struct Node* nextnode = NULL;
    while(curr!=NULL){
        nextnode = curr->next;
        curr->next = previous;
        previous = curr;
        curr= nextnode;
    }
    curr=previous;
    return curr;
}
struct Node* mid(struct Node* head){
    
    struct Node* onepoint=head;
    struct Node* twopoint = head;
    while(onepoint!=NULL && twopoint != NULL &&  twopoint->next!=NULL){
    
        onepoint = onepoint->next;
        twopoint = twopoint->next->next;
    }
    return onepoint;
}
int main()
{
    struct Node* head=NULL;
    struct Node* temp=NULL;
    push(&head,5);
    push(&head,6);
    push(&head,7);
    push(&head,6);
    push(&head,5);
    temp = mid(head);
    temp = temp->next;
    temp=reverse(temp);
    while(head!=NULL && temp != NULL){
        if(head->data != temp->data){
            printf("Not a Palindrome");
            return 0;
        }
        head =head->next;
        temp =temp->next;
    }
    printf("palindrome");

    return 0;
}
