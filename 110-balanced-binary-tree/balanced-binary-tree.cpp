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
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
        return true;
        
        int lh=height(root->left);
        int rh=height(root->right);

        if(abs(lh-rh)>1)
        return false;

        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);

        if(!l | !r)
        return false;

        return true;

    }

private:
    int height(TreeNode* root){
        if(root==nullptr)
        return 0;

        int lh=height(root->left);
        int rh=height(root->right);;

        return 1+max(rh,lh);
    }
};