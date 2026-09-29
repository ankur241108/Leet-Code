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
        ListNode*mid=nullptr;
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            
        }

        mid=slow;
        temp=mid;

        while(temp!=nullptr){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;

        }

        ListNode*tail=prev;
        temp=head;
        while(tail!=nullptr){
            if(temp->val !=tail->val){
                return false;
            }

            temp=temp->next;
            tail=tail->next;
        }
        return true;
    }
};