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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack <TreeNode*> sp,sq;
        sp.push(p);
        sq.push(q);

        while(!sp.empty() && !sq.empty()){
            TreeNode * Nodep=sp.top();
            TreeNode * Nodeq=sq.top();
            sq.pop();
            sp.pop();

            if(Nodep==nullptr && Nodeq==nullptr)
            continue;

            if(!Nodeq || !Nodep || Nodep->val!=Nodeq->val)
            return false;

            sp.push(Nodep->left);
            sq.push(Nodeq->left);
            sp.push(Nodep->right);
            sq.push(Nodeq->right);
        }

        return sq.empty() && sp.empty();
    }
};