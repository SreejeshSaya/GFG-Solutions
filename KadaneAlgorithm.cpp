class Solution {
    private:
    Node* helper(Node *node) {
        if(node == nullptr) return nullptr;
        
        Node *tmp;
        tmp = node->left;
        node->left = helper(node->right);
        node->right = helper(tmp);
        return node;
    }
    public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        node = helper(node);
    }
};