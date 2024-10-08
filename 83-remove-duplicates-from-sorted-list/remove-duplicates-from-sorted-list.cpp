/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        
        // Non-empty list
        ListNode* curr = head;
        
        
        while(curr != NULL && curr -> next != NULL){
            
            if( curr -> val == curr -> next -> val){
                ListNode* next_next = curr->next->next;
                ListNode* NodeToDelete = curr->next;
                delete(NodeToDelete);
                curr -> next = next_next;
            }
            
            else  {      // not equal
                curr = curr->next;
                
            }
        }
        return head;
        
    }
};