class Solution {
public:
    void helper(TreeNode* root, vector<int>&traversal){
        if(root!=nullptr){
            helper(root->left,traversal);
            traversal.push_back(root->val);
            helper(root->right,traversal);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>traversal;
        helper(root, traversal);

        return traversal;
    }
};