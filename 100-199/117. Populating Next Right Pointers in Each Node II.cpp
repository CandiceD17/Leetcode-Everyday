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
        Node* cur = root;
        while(cur!=NULL){
            Node* dummy = new Node(-1, NULL, NULL, NULL);
            //do not use the default constructor, or there would be memory leak
            Node* temp = dummy;
            while(cur!=NULL){
                if(cur && cur->left!=NULL){
                    temp->next = cur->left;
                    temp = temp->next;
                }
                if(cur && cur->right!=NULL){
                    temp->next = cur->right;
                    temp = temp->next;
                }
                cur = cur->next;
            }
            cur = dummy->next;
        }
        return root;}
};

2019.08.12
