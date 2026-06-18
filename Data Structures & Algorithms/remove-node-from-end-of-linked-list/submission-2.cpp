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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL || head==NULL) return NULL;
        ListNode *first=head, *second=head;
        while(n--){
            if(first!=NULL) first=first->next;
        }
        if(first==NULL){
            return head->next;
        }
        while(first->next!=NULL){
            first=first->next;
            second=second->next;
        }

        if(second->next!=NULL){
            ListNode* temp=second->next->next;
            second->next=temp;
            return head;
        }
        else{
            return head;
        }
    }
};
