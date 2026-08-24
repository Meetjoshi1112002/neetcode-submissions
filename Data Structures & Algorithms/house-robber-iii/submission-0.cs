/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {

    private (int wr, int wor) CountMax(TreeNode root){
        if(root == null){
            return (0,0);
        }
        (int wr, int wor) lrs = CountMax(root.left);
        (int wr, int wor) rrs = CountMax(root.right);

        return (root.val + lrs.wor + rrs.wor, Math.Max(lrs.wr,lrs.wor) + Math.Max(rrs.wr,rrs.wor));
    }
    public int Rob(TreeNode root) {
         (int wr, int wor) rs = CountMax(root);
         return Math.Max(rs.wr,rs.wor);
    }
}