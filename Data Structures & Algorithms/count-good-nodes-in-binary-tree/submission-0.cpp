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
    bool isBigThanAll(vector<int> arr,int num){
        for(int i:arr){
            if(i>num) return false;
        }
        return true;
    }
    void dfs(TreeNode* root,vector<int> arr, int &count){
        if(!root) return;
        if(isBigThanAll(arr,root->val)){
            count++;
        }
        arr.push_back(root->val);
        dfs(root->left,arr,count);
        dfs(root->right,arr,count);
    }
public:
    int goodNodes(TreeNode* root) {
        vector<int> arr;
        int count = 0;
        dfs(root,arr,count);
        return count;
    }
};
