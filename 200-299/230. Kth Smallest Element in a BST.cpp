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
    vector<int> order;
public:
    void inorder(TreeNode* cur){
        if(!cur)
            return;
        inorder(cur->left);
        order.push_back(cur->val);
        inorder(cur->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return order[k-1];
    }
};

2019.09.06
