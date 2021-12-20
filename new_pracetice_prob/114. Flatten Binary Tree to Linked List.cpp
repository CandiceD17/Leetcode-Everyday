/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == nullptr)
            return;
        
        flatten(root->left);
        flatten(root->right);
        
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        root->right = left;
        root->left = nullptr;
        
        TreeNode* temp = root; //left could be a nullptr
        while(temp->right != nullptr)
            temp = temp->right;
        temp->right = right;
    }
};
