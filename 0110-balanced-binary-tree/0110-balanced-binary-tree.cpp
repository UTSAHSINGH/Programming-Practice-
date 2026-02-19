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
    int dfs(TreeNode* root){
        if (!root) return 0;

        int left_hieght=dfs(root->left);
        if(left_hieght==-1) return -1;

        int right_height=dfs(root->right);
        if(right_height==-1) return -1;

        if(abs(left_hieght-right_height)>1) return -1;


        return max(left_hieght,right_height)+1;
    }
    bool isBalanced(TreeNode* root) {
        return dfs(root)!=-1;
    }
};