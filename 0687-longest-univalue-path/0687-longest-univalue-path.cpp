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
    int ans;
    int longestUnivaluePath(TreeNode* root) {
        ans=0;
        find(root);
        return ans;      
    } int find(TreeNode* root){
        if (root==NULL) return 0;
        int left=find(root->left);
        int right=find(root->right);
        int dirleft=0,dirright=0;

        if(root->left!=NULL && root->left->val==root->val){
            dirleft=(left+1);
        }if(root->right!=NULL && root->right->val==root->val){
            dirright=(right+1);
        }
        ans=max(ans,dirleft+dirright);
        return max(dirleft,dirright);

    }
};