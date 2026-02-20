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
    int sum=0;
    bool findsum(TreeNode* root,int targetSum)
    {
        if(!root) return false;

        sum+=root->val;

        if(sum==targetSum && (root->left==nullptr && root->right==nullptr))return true;

        if(findsum(root->left,targetSum) || findsum(root->right,targetSum)) return true;

        sum-=root->val;
        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        return (findsum(root,targetSum));
    }
};