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
int maxi=INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
       maxim(root,maxi);
        return maxi;

    }
private:

    int maxim(TreeNode* root, int &maxi){
        if(root==nullptr)
        return 0;

        int lh=max(0,maxim(root->left,maxi));
        int rh=max(0,maxim(root->right,maxi));

        maxi=max(maxi,lh+rh+root->val);

        return root->val +max(rh,lh);
    }
};