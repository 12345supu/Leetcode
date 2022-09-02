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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> v;
            int curr_size = q.size();
            for(long i=0;i<curr_size;i++) 
            {
                TreeNode* curr=q.front();
                v.push_back(curr->val);
                if(curr->left) 
                    q.push(curr->left);
                if(curr->right) 
                    q.push(curr->right);
                q.pop();
            }
            res.push_back(v);
        }
        return res;
    }
};