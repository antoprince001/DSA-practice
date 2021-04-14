/**

Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isSymmetric(TreeNode root) {
        
        return checkSymmetry(root,root);
    }
    
    public boolean checkSymmetry(TreeNode t1, TreeNode t2){
        
        
        if(t1 == null && t2 == null){
            return true;
        }
        else if(t1 == null){
            return false;
        }
        else if(t2 == null){
            return false;
        }
        else{
        return (t1.val == t2.val)&checkSymmetry(t1.left,t2.right)&checkSymmetry(t1.right,t2.left);
        }
        
    }
}
