// Slightly different from the same problem on LeetCode
// Line 12, (l+r) instead of(l+r+1)

class Solution {
private:
    int maxDiameter;
    int diameterHelper(Node* root) {
        if(root==nullptr) return 0;
        
        int l=diameterHelper(root->left);
        int r=diameterHelper(root->right);
        maxDiameter= max(maxDiameter, (l+r+1));
        return max(l, r)+1;
    }
public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        maxDiameter=0;
        diameterHelper(root);
        return maxDiameter;
    }
};