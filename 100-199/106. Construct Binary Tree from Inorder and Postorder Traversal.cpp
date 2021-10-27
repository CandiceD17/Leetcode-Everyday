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
    int pos_index;
    vector<int> postorder;
    unordered_map<int, int> key;
public:
    TreeNode* helper(int left, int right){
        if(left == right)
            return NULL;
        int root_val = postorder[pos_index];
        TreeNode* root = new TreeNode(root_val);
        
        pos_index--;
        int index = key[root_val];
        root->right = helper(index+1, right);
        root->left = helper(left, index);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        this->postorder = postorder;
        if(inorder.empty())
            return NULL;
        int size = inorder.size();
        this->pos_index = size-1;
        for(int i=0; i<size; i++)
            key[inorder[i]]=i;
        return helper(0, size);
    }
};

2019.08.09
