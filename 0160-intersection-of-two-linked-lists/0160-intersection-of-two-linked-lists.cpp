/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*intersectval=nullptr;
        int cnt1=0;
        int cnt2=0;
        int diff=0;
        ListNode*tempA=headA;
        ListNode*tempB=headB;

        while(tempA!=nullptr){
            tempA=tempA->next;
            cnt1++;
        }

        while(tempB!=nullptr){
            tempB=tempB->next;
            cnt2++;
        }

        tempA=headA;
        tempB=headB;
        if(cnt1>cnt2){
             diff=cnt1-cnt2;
             tempA=headA;

        while(tempA!=nullptr){
            tempA=tempA->next;
             diff--;
            if(diff==0){
                break;
            }
            
           
        }
        }

        else if(cnt1==cnt2){
            
        }

        else{
            diff=cnt2-cnt1;
            tempB=headB;
            while(tempB!=nullptr){
                tempB=tempB->next;
                diff--;
                if(diff==0){
                break;
            }
            
            
        }
        }
        
       

        while(tempA!=nullptr && tempB!=nullptr){
             if(tempA==tempB){
                return tempB;
            }
            tempA=tempA->next;
            tempB=tempB->next; 
           
        }
        return nullptr;
    }
};