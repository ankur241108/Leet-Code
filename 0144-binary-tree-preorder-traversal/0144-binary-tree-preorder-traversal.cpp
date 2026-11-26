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
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {

        if(root==nullptr){
            return {};
        }
        TreeNode*node=root;
            ans.push_back(root->val);
        TreeNode*left=root->left;
        preorderTraversal(left);
        TreeNode*right=root->right;
        preorderTraversal(right);

    return ans;
    }
};