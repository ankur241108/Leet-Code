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

    ListNode*reverse(ListNode*head){
            ListNode*temp=head;
            ListNode*prev=nullptr;
            ListNode*front=nullptr;

            while(temp!=nullptr){
                front=temp->next;
                temp->next=prev;
                prev=temp;
                temp=front;
            }
            
            return prev;
    }

    ListNode*getKthNode(ListNode*head,int k){
         ListNode*temp=head;
             k-=1;
            while(temp!=nullptr && k>0){
                k--;
                temp=temp->next;
            }
            return temp;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*prevLast=nullptr;
        

        while(temp!=nullptr){
            ListNode*KthNode=getKthNode(temp,k);

            
            if(KthNode==nullptr){
                if(prevLast){
                    prevLast->next=temp;
                    break;
                }
            }
            ListNode*NextNode=KthNode->next;
            KthNode->next=nullptr;
            reverse(temp);
            if(temp==head){
                head=KthNode;
            }

            else{
                prevLast->next=KthNode;

            }
            prevLast=temp;
            temp=NextNode;
        }
        return head;
    }
};