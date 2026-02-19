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
    int maxPathSum(TreeNode* root) {
        int max_path_sum=root->val;
        path(root,max_path_sum);
        return max_path_sum;
        
    } int path(TreeNode* root,int &max_path_sum){
        if (root==NULL) return 0;
        int left_sum=max(0,path(root->left,max_path_sum));
        int right_sum=max(0,path(root->right,max_path_sum));
        max_path_sum=max(left_sum+right_sum+root->val,max_path_sum);
        return max(left_sum,right_sum)+root->val;
    }
};