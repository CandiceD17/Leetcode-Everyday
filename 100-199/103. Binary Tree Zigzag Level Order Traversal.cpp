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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bool reverse = false;
        if(root==NULL)
            return {};
        queue<TreeNode*> container;
        vector<vector<int>> res;
        container.push(root);
        while(!container.empty()){
            int size = container.size();
            vector<int> temp;
            for(int i=0; i<size; i++){
            TreeNode* cur = container.front();
            container.pop();
            if(!reverse)
                temp.push_back(cur->val);
            else
                temp.insert(temp.begin(), cur->val);
            if(cur->left!=NULL)
                container.push(cur->left);
            if(cur->right!=NULL)
                container.push(cur->right);
            }
            res.push_back(temp);
            reverse = (!reverse);
        }
        return res;
    }
};

2019.08.08
