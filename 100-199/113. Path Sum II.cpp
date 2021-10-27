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
    vector<vector<int>> res;
public:
    void valid(TreeNode* cur, int sum, vector<int> temp){
        int n = cur->val;
        temp.push_back(n);
        if(cur->left==NULL && cur->right==NULL){
            if(n == sum){
            res.push_back(temp);
            return;}
        }
        if(cur->left!=NULL)
            valid(cur->left, sum-n, temp);
        if(cur->right!=NULL)
            valid(cur->right, sum-n, temp);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return {};
        vector<int> temp;
        valid(root, sum, temp);
        return res;
    }
};

2019.08.09
