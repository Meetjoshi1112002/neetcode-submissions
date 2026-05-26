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
    void dfs(TreeNode* root1, TreeNode* root2, bool &ans){
        if((!root1 and !root2) or ans == false) return;
        if( (root1 and !root2) or (!root1 and root2) or root1->val != root2->val){
            ans = false;
            return;
        }
        dfs(root1->left, root2->left, ans);
        dfs(root1->right, root2->right, ans);
        
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans = true;
        dfs(p,q,ans);
        return ans;
    }
};
