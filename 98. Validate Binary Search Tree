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
public:
    bool isValid(TreeNode* cur, int low, bool haslow, int high, bool hashigh){
        if(cur==NULL)
            return true;
        int val = cur->val;
        if(haslow && val<=low)
            return false;
        if(hashigh && val>=high)
            return false;
        if(isValid(cur->left, low, haslow, val, true) && isValid(cur->right, val, true, high, hashigh))
            return true;
        return false;
    }
    
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        return isValid(root, 0, false, 0, false);
    }
};

2019.08.06
