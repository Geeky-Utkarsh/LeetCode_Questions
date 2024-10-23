class Solution1 {
public:
    TreeNode* replaceValueInTree(TreeNode* root){
      // Step 1=> Find levelSum 
      // Step 2=> Update each node (levelSum-sibling)

      if(root==NULL) // edge case -> if tree itself is empty 
        return root; 

      queue<TreeNode*>q; // O(n)
      q.push(root);
      vector<int>l_sum; // O(n)

      // Finding the sum of each level and storing it in vector level_sum
      while(!q.empty()){
        int cur_levelsum=0;
        int n=q.size();

        while(n--){
            TreeNode* curr=q.front();
            q.pop();

            cur_levelsum+=curr->val;

            if(curr->left!=NULL){
                q.push(curr->left);
            }

            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        l_sum.push_back(cur_levelsum);
      }

      // (update each node with cousin sum)
      q.push(root);
      root->val=0; // root has no cousins 
      int level_idx=1;

      while(!q.empty()){
        int n=q.size(); // current level me kitne node hai 

        while(n--){
            TreeNode* curr=q.front();
            q.pop();

            //updated node value = (levelsum of current level) - sibling sum of current node  
            int siblingSum=curr->left!=NULL ? curr->left->val: 0;
            siblingSum+=curr->right!=NULL ? curr->right->val : 0;

            // now retriving current level sum  from the vector 
            if(curr->left){
                curr->left->val=l_sum[level_idx]-siblingSum;
                q.push(curr->left);
            }
            if(curr->right){
                curr->right->val=l_sum[level_idx]-siblingSum;
                q.push(curr->right);
            }
        }
        level_idx++;

      }
      return root;

    }

    // TC-> O(2*n)     we traversed tree by using BFS 2 times 
    // SC-> O(n)+O(n)  we used a vetor for storing level sum + queue which will store all nodes in worst case  
};

class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root){
        // we can find the level sum on the fly -> no need to do an individual BFS for it

        if(root==NULL)
          return root;
        
        queue<TreeNode*>q;
        q.push(root);
        int lvl_sum=root->val;

        while(!q.empty()){
            int n=q.size();

            int next_lvl_sum=0;

            while(n--){
                TreeNode* curr=q.front();
                q.pop();

                curr->val=lvl_sum-curr->val;

                int siblingSum=(curr->left!=NULL ? curr->left->val : 0);
                siblingSum+=(curr->right!=NULL ? curr->right->val : 0);

                if(curr->left){
                    next_lvl_sum+=curr->left->val;
                    curr->left->val=siblingSum;
                    q.push(curr->left);
                }

                if(curr->right){
                    next_lvl_sum+=curr->right->val;
                    curr->right->val=siblingSum;
                    q.push(curr->right);
                }
            }
            lvl_sum=next_lvl_sum;
        }
         return root;
    }
  
};