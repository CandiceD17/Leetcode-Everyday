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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
            return {};
        vector<int> res;
        stack<TreeNode*> pre;
        pre.push(root);
        while(!pre.empty()){
            TreeNode* cur = pre.top();
            pre.pop();
            res.push_back(cur->val);
            if(cur->right!=NULL)
                pre.push(cur->right);
            if(cur->left!=NULL)
                pre.push(cur->left);
        }
        return res;
    }
};

2019.08.15
