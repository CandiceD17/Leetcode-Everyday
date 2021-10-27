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
    int pre_index = 0;
    vector<int> preorder;
    vector<int> inorder;
    unordered_map<int, int> key;
public:
    TreeNode* helper(int left, int right){
        if(left==right)
            return NULL;
        int root_val = preorder[pre_index];
        TreeNode* root = new TreeNode(root_val);
        pre_index++;
        
        int index = key[root_val];
        root->left = helper(left, index);
        root->right = helper(index+1, right);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        this->preorder = preorder;
        this->inorder = inorder;
        if(preorder.empty())
            return NULL;
        int size = preorder.size();
        for(int i=0; i<size; i++)
            key[inorder[i]]=i;
        return helper(0, size);
    }
};

2019.08.09
