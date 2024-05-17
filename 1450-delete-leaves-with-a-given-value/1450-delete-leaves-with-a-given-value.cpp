class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        // for tree problems -> we use recursion leaf of faith 

        if(root==NULL)
           return NULL;
        
        root->left=removeLeafNodes(root->left,target);
        root->right=removeLeafNodes(root->right, target);

        if(root->val==target && root->left==NULL && root->right==NULL)
         return NULL;
        
        return root;

    }
};