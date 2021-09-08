Node* insert(Node* root, int key) {
    Node* r = root;
    while(r->data != key) {
        if(r->data > key) {
            if(r->left) r=r->left;
            else {
                Node* n=new Node(key);
                r->left = n;
                break;
            }
        }
        else {
            if(r->right) r=r->right;
            else {
                Node *n=new Node(key);
                r->right = n;
                break;
            }
        }
    }
    
    return root;
}
