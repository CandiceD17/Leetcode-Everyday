/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == nullptr)
            return root;
        connect_two(root->left, root->right);
        return root;
    }
    
    void connect_two(Node* root_1, Node* root_2){
        if(root_1 == nullptr || root_2 == nullptr)
            return;
        root_1->next = root_2;
        
        connect_two(root_1->left, root_1->right);
        connect_two(root_2->left, root_2->right);
        connect_two(root_1->right, root_2->left);
    }
};
