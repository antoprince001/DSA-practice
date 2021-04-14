/**

Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

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
        
        vector<vector<int>> t;
        
        if(root == NULL){
            return t;
        }
        
        
        queue<TreeNode *> q;
        q.push(root);
        
        while(!q.empty()){            
            vector<int> v(0); //each time vector will be initialised with 0
            int n=q.size();
			
            while(n--) 
            {
            TreeNode* t=q.front();
            q.pop();
            v.push_back(t->val); 
            if(t->left) q.push(t->left);  
            if(t->right) q.push(t->right);
            }
            
            t.push_back(v);
        }
        return t;
        
    }
};
