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
    bool sameTree(TreeNode* par, TreeNode*child){
        if(!par and !child) return true;
        if((par and !child) or (!par and child) or (par->val != child->val)) return false;
        else return sameTree(par->left , child->left) and sameTree(par->right , child->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        if(root and !subRoot) return true;
        if(subRoot and root->val == subRoot->val and sameTree(root,subRoot)) return true;
        else return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);

    }
};
