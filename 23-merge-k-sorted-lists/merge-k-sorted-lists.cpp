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
    ListNode* mergeTwolists(ListNode* list1 ,ListNode* list2 ){
        if(list1 == NULL || list2 == NULL){
        if(list1 == NULL){
            return list2;
        }
        else{
            return list1 ;
        }

        }
        if (list1-> val <= list2 -> val){
            list1 -> next = mergeTwolists(list1 ->next , list2 );
            return list1 ; 
        }
        else {
            list2 -> next = mergeTwolists(list1,list2->next);
            return list2;
        }

    }


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int len = lists.size();
        if(lists.empty()){
            return nullptr;
        }
        ListNode* curr1 ;
        ListNode* curr2 ;
        for (int i = 0;i<len-1; i++ ){
           curr1= lists[i];
           curr2= lists[i+1];
           lists[i+1] = mergeTwolists(curr1,curr2);
        }
        return lists[len -1];
    }
};