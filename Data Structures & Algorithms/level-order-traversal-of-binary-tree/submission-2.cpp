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
    void BFS(TreeNode* root,vector<vector<int>> &ans){
        queue<TreeNode*>q;
        q.push(root);
        q.push(nullptr);
        vector<int> temp;
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr){
                temp.push_back(curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            else{
                ans.push_back(temp);
                temp = {};
                if(!q.empty()) q.push(nullptr);
            }
        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        BFS(root, ans);
        return ans;
    }
};
