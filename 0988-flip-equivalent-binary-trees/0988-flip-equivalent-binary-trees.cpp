class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        // we will be using recursion leap of faith 

        // 1st base case 
        if(root1==NULL && root2==NULL)
          return true;
        
        // 2nd base case 
        if(root1==NULL || root2==NULL)
          return false;



        // Writing the recursive function 
        if(root1->val==root2->val){
            bool without_flip=flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right);
            bool with_flip=flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left);

            return without_flip || with_flip;
        }
        else 
           return false;
        

    }
};