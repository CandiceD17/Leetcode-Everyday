/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
private:
    queue<int> order;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        order.push(root->val);
        inorder(root->right);
    }
public:
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    /** @return the next smallest number */
    int next() {
        int num = order.front();
        order.pop();
        return num;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return (!order.empty());
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
 
 2019.08.26
