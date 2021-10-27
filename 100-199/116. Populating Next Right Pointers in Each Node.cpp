/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return NULL;
        if(root->left==NULL)
            return root;
        Node* pre = root;
        Node* cur = root->left;
        while(cur!=NULL){
            Node* right = NULL;
            Node* temp = cur;
            while(pre!=NULL){
                if(right!=NULL)
                    right->next = temp;
                temp->next = pre->right;
                right = pre->right;
                pre = pre->next;
                if(pre!=NULL)
                    temp =  pre->left;
            }
            pre = cur;
            cur = cur->left;
        }
        return root;
    }
};

2019.08.12
