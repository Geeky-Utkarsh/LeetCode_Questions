class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        // we will be doing level order travel DFS

        queue<TreeNode*>q;
        q.push(root);

        int lvl=0;

        // starting BFS 
        while(!q.empty()){

            int n=q.size(); // curr lvl 

            vector<TreeNode*>lvl_nodes;

            while(n--){
                TreeNode*tmp=q.front();
                q.pop();
                
                lvl_nodes.push_back(tmp);

                if(tmp->left)
                 q.push(tmp->left);
                if(tmp->right)
                  q.push(tmp->right);
            }
            // current level ended 
            if(lvl%2==1){
                // reverse(lvl_nodes.begin(), lvl_nodes.end());
                int i=0; 
                int j=lvl_nodes.size()-1;

                while(i<j) { 
                    swap(lvl_nodes[i]->val, lvl_nodes[j]->val); 
                    i++; 
                    j--; 
                }
            }
            lvl++; // next lvl
        }        

        return root;
    }
};