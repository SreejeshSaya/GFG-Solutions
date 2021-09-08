class Solution
{
    private:
    int sum;
    int k;
    bool exist;
    void preorder(Node* r) {
        if(!r) return;
        
        sum += r->data;
        if((!r->left && !r->right) && (sum == k)) exist = true;
        
        preorder(r->left);
        preorder(r->right);
        
        sum -= r->data;
    }
    public:
    bool hasPathSum(Node *root, int S) {
        exist = false;
        sum = 0;
        k = S;
        preorder(root);
        return exist;
    }
};