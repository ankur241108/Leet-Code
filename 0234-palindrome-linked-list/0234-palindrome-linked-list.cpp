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
    bool isPalindrome(ListNode* head) {
        ListNode*temp=head;
        ListNode*front=head;
        ListNode*prev=nullptr;
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            
        }

     
        temp=slow;

        while(temp!=nullptr){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;

        }

       
        temp=head;
        while(prev!=nullptr){
            if(temp->val !=prev->val){
                return false;
            }

            temp=temp->next;
            prev=prev->next;
        }
        return true;
    }
};