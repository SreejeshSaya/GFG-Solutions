class Solution
{
    private:
    int preVal;
    bool inorder(Node* root) {
        if(!root) return true;
        
        bool l = inorder(root->left);
        bool c = root->data > preVal;
        preVal = root->data;

        return l && c && inorder(root->right);
    }
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        preVal = INT_MIN;
        return inorder(root);
    }
};
