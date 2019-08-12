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
    void preorder(TreeNode* cur){
        if(cur==NULL)
            return;
        nums.push_back(cur->val);
        preorder(cur->left);
        preorder(cur->right);
    }
    
    void flatten(TreeNode* root) {
        if(root==NULL)
            return;
        preorder(root);
        root->val = nums[0];
        root->left = NULL;
        TreeNode* cur = root;
        for(int i=1; i<nums.size(); i++){
            cur->right = new TreeNode(nums[i]);
            cur = cur->right;
        }
    }
};

Since the problem asks to flatten the tree in-place, we have another solution:
to move the left tree to the right, to connect the left tree with the original right tree:

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
    TreeNode* pre;
public:
    void flatten(TreeNode* root) {
        if(root==NULL)
            return;
        if(pre!=NULL){
            pre->right = root;
            pre->left = NULL;
        }
        pre = root;
        TreeNode* right = pre->right;
        flatten(pre->left);
        flatten(right);
    }
};

2019.08.12
