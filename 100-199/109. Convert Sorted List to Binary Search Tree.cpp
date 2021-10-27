/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    vector<int> nums;
public:
    TreeNode* helper(int left, int right){
        if(left>right)
            return NULL;
        int mid = (left+right)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = helper(left, mid-1);
        root->right = helper(mid+1, right);
        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode* cur = head;
        while(cur!=NULL){
            nums.push_back(cur->val);
            cur = cur->next;
        }
        return helper(0, nums.size()-1);
    }
};

2019.08.09
