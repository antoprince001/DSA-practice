/**
 Given the root of a binary tree, determine if it is a valid binary search tree (BST).

  A valid BST is defined as follows:

    The left subtree of a node contains only nodes with keys less than the node's key.
    The right subtree of a node contains only nodes with keys greater than the node's key.
    Both the left and right subtrees must also be binary search trees.

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
    public boolean isValidBST(TreeNode root) {
        
        return bstcheck(root,Integer.MIN_VALUE,Integer.MAX_VALUE);
       
    }
    
    public boolean bstcheck(TreeNode root,int min, int max){
         
         if(root == null){
            return true;
        }
        else if(root.val < min || root.val > max){
             return false;
         }
        else if(root.left != null && root.left.val >= root.val ){
            return false;
        }
        else if(root.right != null && root.right.val <= root.val ){
            return false;
        }
        else{
            return bstcheck(root.left,min,root.val-1)&bstcheck(root.right,root.val+1,max);
        }
        
    }
    
}
