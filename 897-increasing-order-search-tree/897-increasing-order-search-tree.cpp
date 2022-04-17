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
    void inorder(TreeNode* &curr, TreeNode* root) {
        if (!root) return;
        inorder(curr, root->left);
        curr->right = new TreeNode(root->val);
        curr = curr->right;
        inorder(curr, root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp;
        TreeNode* curr= new TreeNode();
        temp=curr;
        inorder(curr,root);
        return temp->right;
    }
};