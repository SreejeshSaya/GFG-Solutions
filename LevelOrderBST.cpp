class Solution {
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node) {
        if(node == nullptr) return {};
        vector<int> lOrder;
        queue<Node*> q;
        q.push(node);
        while(!q.empty()) {
            Node* r=q.front();
            q.pop();
            lOrder.push_back(r->data);
            if(r->left) q.push(r->left);
            if(r->right) q.push(r->right);
        }
        return lOrder;
    }
};