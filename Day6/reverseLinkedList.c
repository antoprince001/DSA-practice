/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    
    struct ListNode* prev = NULL;
    struct ListNode* nextnode=NULL;
    
    while(head !=NULL){
        nextnode = head -> next;
        head->next = prev;
        prev = head;
        head = nextnode;
        
    }
    head = prev;
    return head;
}
