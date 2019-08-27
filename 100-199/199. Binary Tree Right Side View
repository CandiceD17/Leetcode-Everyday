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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)
            return {};
        vector<int> res;
        queue<TreeNode*> container;
        container.push(root);
        while(!container.empty()){
            int size = container.size();
            vector<int> level;
            int index = 0;
            while(index<size){
                TreeNode* cur = container.front();
                container.pop();
                level.push_back(cur->val);
                if(cur->left!=NULL)
                    container.push(cur->left);
                if(cur->right!=NULL)
                    container.push(cur->right);
                index++;
            }
            res.push_back(level.back());
        }
        return res;
    }
};
