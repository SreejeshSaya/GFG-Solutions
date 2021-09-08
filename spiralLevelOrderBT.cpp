vector<int> findSpiral(Node *root)
{
    if(!root) return {};
    
    bool r2l = true;
    vector<int> spiral;
    vector<int> level;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        int n=q.size();
        for(int i=0; i<n; ++i) {
            Node *r = q.front();
            q.pop();
            level.push_back(r->data);
            if(r->left) q.push(r->left);
            if(r->right) q.push(r->right);
        }
        if(r2l) reverse(level.begin(), level.end());
        r2l = !r2l;
        for(int i: level) spiral.push_back(i);
        level.clear();
    }
    return spiral;
}