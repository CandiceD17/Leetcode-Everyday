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
    vector<int> res;
public:
    void sum(TreeNode* cur, int num){
        int temp = num*10+cur->val;
        if(cur->left==NULL && cur->right==NULL){
            res.push_back(temp);
            return;
        }
        if(cur->left!=NULL)
            sum(cur->left, temp);
        if(cur->right!=NULL)
            sum(cur->right, temp);
    }
    
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
            return 0;
        sum(root, 0);
        int sum = 0;
        for(int i=0; i<res.size(); i++)
            sum+=res[i];
        return sum;
    }
};

2019.08.12
