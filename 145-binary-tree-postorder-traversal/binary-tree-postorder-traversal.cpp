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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postorder(root,result);

        return result;
    }

private: 
    void postorder(TreeNode* root, vector<int> &res){

        if(root==nullptr)
        return;

        postorder(root->left,res);
        postorder(root->right,res);
        res.push_back(root->val);
    }
};