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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* curr= head ;
        if (head==NULL || head ->next == NULL){
            if (head == NULL){
                return nullptr;
            }
            else {
                return head ;
            }
        }
        int count = 1 ;
        while(curr->next != NULL){
           curr = curr -> next;
           count ++;
        }
        k = k % count ;
        if(k==0){
         return head;
        }
        
        for(int i = 0 ; i<k; i++){
            ListNode* prev = NULL;
            curr = head;
            while(curr->next != NULL){
           prev = curr ;
           curr = curr -> next;
        }
          curr-> next = head ; 
          head = curr ;
          prev-> next = NULL;
 
        }
        return head;
    }
};