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
        ListNode* curA = headA;
        unordered_set<ListNode*> container;
        while(curA!=NULL){
          container.insert(curA);
          curA = curA->next;
        }
      ListNode* curB = headB;
      while(curB!=NULL){
        if(container.count(curB))
          return curB;
        curB = curB->next;
      }
      return NULL;
    }
};
