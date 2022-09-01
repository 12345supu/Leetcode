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
    int solve(TreeNode* root, int maxVal)
    {
        if(root==NULL) 
            return 0;

        int goodNode = 0;
        if(root->val >= maxVal)
        {
            maxVal = root->val;
            goodNode++;
        }

        goodNode += solve(root->left, maxVal);
        goodNode += solve(root->right, maxVal);
        return goodNode;
    }
    
    int goodNodes(TreeNode* root) {

        if(root==NULL) 
            return 0;
        return solve(root, root->val);
    }
};