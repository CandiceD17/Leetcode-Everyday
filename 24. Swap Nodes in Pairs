class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        bool swap = false;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* temp = dummy;
        ListNode* prev = dummy;
        while(temp!=NULL){
             if(!swap){
                prev = temp;
                 temp = temp->next;
                 swap = true;}
             else{
                ListNode* nextOne = temp->next;
                if(nextOne==NULL)
                    break;
                prev->next = nextOne;
                temp->next = nextOne->next;
                nextOne->next = temp;
                swap = false;
            }
        }
        return dummy->next;
    }
};

2019.07.25
