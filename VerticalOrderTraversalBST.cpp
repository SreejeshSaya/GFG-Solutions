class Solution
{
    private:

    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        if(!root) return {};
        map<int, vector<int>> vl;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()) {
            pair<Node*, int> p = q.front();
            q.pop();
            vl[p.second].push_back(p.first->data);
            if(p.first->left) q.push({p.first->left, p.second-1});
            if(p.first->right) q.push({p.first->right, p.second+1});
        }
        vector<int> vo;
        for(auto dv: vl) {
            vector<int> &v = dv.second;
            for(int i: v) vo.push_back(i);
        }
        return vo;
    }
};
