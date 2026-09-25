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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;

        if(head==nullptr){
            return 0;
        }
        int count=0;

        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }

        int mid=(count/2)+1;
        count=1;
        temp=head;
        while(mid>count){
            count++;
            temp=temp->next; 
            
        }
        return temp;
    }
};