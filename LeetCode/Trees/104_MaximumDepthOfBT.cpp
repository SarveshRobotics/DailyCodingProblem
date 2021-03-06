/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int Depth(TreeNode* root){
        if (root == NULL) return 0;
        return 1+ max(Depth(root->left), Depth(root->right));
    }
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        
        int depth = Depth(root);
        
        return depth;
        
    }
};
