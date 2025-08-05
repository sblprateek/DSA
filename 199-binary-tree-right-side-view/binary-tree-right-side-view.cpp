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
vector<int> ans;
public:
    vector<int> rightSideView(TreeNode* root) {
        int level=0;
        modpreorder(root,level);
        return ans;
    }

private:
    void modpreorder(TreeNode* root, int level){
        if(root==nullptr)
        return;
        if(level==ans.size())
            ans.push_back(root->val);

        modpreorder(root->right,level+1);
        modpreorder(root->left,level+1);
        
        return;
    }
};