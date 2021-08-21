vector<int> leftView(Node *root)
{
    vector<int> lV;
    lV.reserve(100);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        int n=q.size();
        Node *l = q.front();
        lV.push_back(l->data);
        q.pop();
        for(int i=1; i<n;++i) {
            l = q.front();
            q.pop();
            if(l->left) q.push(l->left);
            if(l->right) q.push(l->right);
       }
    }
    return lV;
}
