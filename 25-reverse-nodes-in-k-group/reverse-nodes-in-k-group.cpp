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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        
        
        // Check if there are at least k nodes to reverse
        ListNode* check = head;
        for (int i = 0; i < k; ++i) {
            if (!check) return head; 
            check = check->next;
        }
        
        // Step 1: Reverse First K-node
        ListNode* next=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        int count = 0;
        
        while( curr != NULL && count < k){
            next = curr->next;
            curr->next = prev;
            prev=curr;
            curr=next;
            count++;
        }
        
        // Step 2: Recursion
        if(next != NULL){
            head->next = reverseKGroup(next,k);
        }
        // Step 3: return prev 
        return prev;
        
    }
};