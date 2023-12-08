class Solution {
public:
    string tree2str(TreeNode* root) {
        if(root==nullptr){
            return "";
        }   

        string result=to_string(root->val); // root (L)(R)

        string left =tree2str(root->left);
        string right=tree2str(root->right);

        if(root->left==NULL && root->right==NULL) // handeling edge case 
           return result;

        if(root->left==NULL)
         return result+"()"+"("+right+")";
        
        if(root->right==NULL){
            return result+"("+left+")";
        }

        return result +"("+left+")"+"("+right+")";

    }
};