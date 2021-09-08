class Solution {
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root) {
        if(!root) return {};
    	vector<int> levels;
    	queue<Node*> q;
    	bool left2Right=true;
    	vector<int> level;
    	q.push(root);
    	while(!q.empty()) {
    	    int n=q.size();
    	    for(int i=0; i<n; ++i) {
    	        Node* r=q.front();
    	        q.pop();
    	        level.push_back(r->data);
    	        if(r->left) q.push(r->left);
    	        if(r->right) q.push(r->right);
    	    }
    	    if(!left2Right) reverse(level.begin(), level.end());
    	    left2Right = !left2Right;
    	    for(int n: level) levels.push_back(n);
    	    level.clear();
    	}
    	return levels;
    }
};