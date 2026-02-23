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
    int rob(TreeNode* root) {
        int l,r;
        return helper(root,l,r);

    }int helper(TreeNode* root,int &l,int &r){
        if(!root) return 0;
        int ll=0,lr=0,rl=0,rr=0;
        l=helper(root->left,ll,lr);
        r=helper(root->right,rr,rl);
        return max(root->val+ll+lr+rr+rl,l+r);

    }
};