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
    vector<TreeNode*> allTrees(int start, int end){
        vector<TreeNode*> res;
        if(start>end){
            res.push_back(NULL);
            return res;}
        
        for(int i = start; i<=end; i++){
            vector<TreeNode*> left = allTrees(start, i-1);
            vector<TreeNode*> right = allTrees(i+1, end);
            for(auto l: left){
                for(auto r: right){
                    TreeNode* cur = new TreeNode(i);
                    cur->left = l;
                    cur->right = r;
                    res.push_back(cur);
                }
            }
        }
        return res;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        if(n==0)
            return {};
        return allTrees(1,n);
    }
};

2019.08.07
