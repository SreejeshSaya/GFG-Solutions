struct Node *constructTree(int n, int pre[], char preLN[])
{
    stack<Node*> s;
    Node* root = new Node(pre[0]);
    s.push(root);
    
    for(int i=1; i<n; ++i) {
        Node *tmp = new Node(pre[i]);
        Node *p = s.top();
        
        if(!p->left) p->left = tmp;
        else {
            p->right = tmp;
            s.pop();
        }
        
        if(preLN[i] == 'N') {
            s.push(tmp);
        }
    }
    
    return root;
}