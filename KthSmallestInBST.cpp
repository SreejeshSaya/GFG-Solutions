class Solution {
private:
    int k;
    int cur;
    int kSmallest;
    void inorder(Node *root) {
        if(!root || cur > k) return;
        
        inorder(root->left);
        ++cur;
        if(cur == k) { kSmallest=root->data; }
        inorder(root->right);
    }
public:
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        k=K;
        cur=0;
        kSmallest = -1;
        inorder(root);
        return kSmallest;
    }
};