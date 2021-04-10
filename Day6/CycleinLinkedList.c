/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    
    struct ListNode* slow;
    struct ListNode* fast;
    if(head==NULL || head->next == NULL){
        return false;
    }
    slow = head;
    fast = head;
    while(slow->next !=NULL && fast->next!=NULL && fast->next->next!=NULL){
        if(slow->next == fast->next->next){
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}
