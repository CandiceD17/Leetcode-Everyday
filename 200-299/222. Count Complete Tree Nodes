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
    int count=0;
public:
    void preorder(TreeNode* cur){
        if(!cur)
            return;
        count++;
        preorder(cur->left);
        preorder(cur->right);
    }
    int countNodes(TreeNode* root) {
        preorder(root);
        return count;
    }
};

2019.09.05
