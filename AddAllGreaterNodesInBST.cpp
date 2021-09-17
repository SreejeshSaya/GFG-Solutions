void inorderReverse(Node *root, int &sum) {
    if(!root) return;
    
    inorderReverse(root->right, sum);
    root->data += sum;
    sum = root->data;
    inorderReverse(root->left, sum);
}

Node* modify(Node *root)
{
    int sum=0;
    inorderReverse(root, sum);
    return root;
}