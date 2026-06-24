/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* current = head;
    struct ListNode* perv = head;

    while (current != NULL && current->next != NULL){
        current = current->next->next;
        perv = perv->next;
        if(current == perv){
            return true;
        }        
    }
    return false;
}
