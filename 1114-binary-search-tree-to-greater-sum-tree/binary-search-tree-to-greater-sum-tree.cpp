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
private:
    void reverseInorder(TreeNode *root,int &sum){
        if(root == nullptr)return;
        reverseInorder(root->right,sum);
        sum += root->val;
        root->val = sum;
        reverseInorder(root->left,sum);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        reverseInorder(root,sum);
        return root;
        
    }
};