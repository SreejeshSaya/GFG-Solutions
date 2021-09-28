void dTraversal(map<int, vector<int>> &nodeDepths, Node* root, int d) {
    if(!root) return;
    
    nodeDepths[d].push_back(root->data);
    dTraversal(nodeDepths, root->left, d+1);
    dTraversal(nodeDepths, root->right, d);
}

vector<int> diagonal(Node *root)
{
   map<int, vector<int>> nodeDepths;
   dTraversal(nodeDepths, root, 0);
   vector<int> dt;
   for(pair<int, vector<int>> p: nodeDepths) {
       vector<int> &d = p.second;
       for(int n: d) dt.push_back(n);
   }
   
   return dt;
}