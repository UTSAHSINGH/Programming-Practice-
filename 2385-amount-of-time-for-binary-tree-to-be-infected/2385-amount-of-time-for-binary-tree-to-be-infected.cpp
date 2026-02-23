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
    int mxdist=0;
    pair<int,bool> dfs(TreeNode* root, int start, int top) {
        pair<int,bool> mxLeft = {0, false}; 
        pair<int,bool> mxRight = {0, false};
        if(root->left != NULL) {
            mxLeft = dfs(root->left, start, top);
            mxLeft.first = mxLeft.first+1;
        }
        if(root->right != NULL) {
            mxRight = dfs(root->right, start, top);
            mxRight.first = mxRight.first + 1;
        }
        int mx=max(mxLeft.first, mxRight.first);
        if(root->val == start) {
            mxdist=max(mxdist, mx);
            return {0, true};
        }
        if(mxLeft.second || mxRight.second) {
            int sum=mxLeft.first+mxRight.first;
            mxdist=max(mxdist, sum);
            if(mxLeft.second) {
                return {mxLeft.first, mxLeft.second};
            } else {
                return {mxRight.first, mxRight.second};
            }
        }
        return {mx, false};
    }

    int amountOfTime(TreeNode* root, int start) {
        dfs(root, start, root->val);
        return mxdist;
    }
};