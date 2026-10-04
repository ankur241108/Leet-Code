
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }

         if(head->next==nullptr || head->next->next==nullptr){
            return head;
        }

    

        ListNode*odd=head;
        ListNode*even=head->next;
        ListNode*evenhead=even;

        // ODD

       

        while(even!=nullptr && even->next!=nullptr){
            
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
       
        odd->next=evenhead;
        
         return head;
    }
   
};