// Should return true if tree is Sum Tree, else false
// Own
class Solution {
    private:
    bool isValid;
    int treeHelper(Node* root) {
        if(!isValid || !root) return 0;
        if(!root->left && !root->right) return root->data;
        
        int l=0, r=0;
        l = treeHelper(root->left);
        r = treeHelper(root->right);
        
        if((l+r) != root->data) isValid=false;
        return l+r+root->data;
    }
    
    public:
    bool isSumTree(Node* root) {
        isValid=true;
        treeHelper(root);
        return isValid;
    }
};

// GFG Article
int isLeaf(node *node) {
    if(node == NULL)
        return 0;
    if(node->left == NULL && node->right == NULL)
        return 1;
    return 0;
}
 
/* returns 1 if SumTree property holds for the given
    tree */
int isSumTree(node* node) {
    int ls; // for sum of nodes in left subtree
    int rs; // for sum of nodes in right subtree
 
    /* If node is NULL or it's a leaf node then
       return true */
    if(node == NULL || isLeaf(node))
        return 1;
 
    if( isSumTree(node->left) && isSumTree(node->right)) {
       
        // Get the sum of nodes in left subtree
        if(node->left == NULL)
            ls = 0;
        else if(isLeaf(node->left))
            ls = node->left->data;
        else
            ls = 2 * (node->left->data);
 
        // Get the sum of nodes in right subtree
        if(node->right == NULL)
            rs = 0;
        else if(isLeaf(node->right))
            rs = node->right->data;
        else
            rs = 2 * (node->right->data);
 
        /* If root's data is equal to sum of nodes in left
           and right subtrees then return 1 else return 0*/
        return(node->data == ls + rs);
    }
    return 0;
}