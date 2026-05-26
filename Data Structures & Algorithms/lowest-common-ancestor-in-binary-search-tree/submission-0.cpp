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
    bool contains(TreeNode* root , TreeNode* p){
        if(!root) return false;
        if(root->val == p->val) return true;
        if(root->val > p->val){
            return contains(root->left,p);
        }
        else return contains(root->right,p);
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;
        TreeNode* lca = nullptr;
        if(contains(root,p) and contains(root,q)){
            lca =  root;
        };
        if(root->val > p->val and root->val > q->val){
            lca =  lowestCommonAncestor(root->left,p,q);
        }
        else if(root->val < p->val and root->val < q->val) {
            lca =  lowestCommonAncestor(root->right,p,q);
        }
        return lca;
    }
};
