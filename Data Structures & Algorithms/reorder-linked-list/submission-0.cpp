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

    ListNode* reverseList(ListNode* cur, ListNode* prev){
        if(cur->next==NULL){
            cur->next=prev;
            return cur;
        }
        ListNode* nex=cur->next;
        cur->next=prev;
        return reverseList(nex, cur);
    }

    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL) return;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast->next!=NULL) fast=fast->next;
        }
        ListNode* temp=slow->next;
        slow->next=NULL;
        ListNode* head2 = reverseList(temp,NULL);

        ListNode* head1=head;
        while(head1!=NULL && head2!=NULL){
            ListNode* temp=head2;
            head2=head2->next;
            temp->next=head1->next;
            head1->next=temp;
            head1=temp->next;
        }
    }
};
