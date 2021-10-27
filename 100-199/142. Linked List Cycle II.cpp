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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> hash;
        ListNode* cur = head;
        while(true){
            if(cur==NULL)
                return NULL;
            if(hash.count(cur))
                return cur;
            hash.insert(cur);
            cur = cur->next;
        }
        return NULL;
    }
};

However, this is very slow and uses extra memory space.
Using chasing theory:

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
    ListNode* intersect(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)
                return slow;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = intersect(head);
        if(temp==NULL)
            return NULL;
        ListNode* cur = head;
        while(cur!=temp){
            cur=cur->next;
            temp=temp->next;
        }
        return cur;
    }
};

2019.08.15
